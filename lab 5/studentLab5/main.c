#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <stdio.h>
#include <setjmp.h>

#define TRY do{ jmp_buf ex_buf__; if( !setjmp(ex_buf__) ){
#define CATCH } else {
#define ETRY } }while(0)
#define THROW longjmp(ex_buf__, 1)

struct Student_t read();
void sort(struct Student_t* arrayOfStudents,int n);
int  search(struct Student_t* arrayOfStudents,int n);
void add2(struct Student_t* arrayOfStudents,int n);
void display(struct Student_t* arrayOfStudents,int n);
void getMax(struct Student_t* arrayOfStudents,int n);
//void copy(struct Student_t *s2, struct Student_t *s1);


struct Student_t
{
    int id;
    float gpa;
    char name[20];
};

int main()
{
    struct Student_t* arrayOfStudents= (struct Student_t*) malloc(sizeof(struct Student_t)*10);
    int s=0;
    FILE* f =fopen("student_file.txt","r");
    if(f== NULL)
    {
        printf("Error reading file");
        exit(1);
    }
    char c;

    fscanf(f,"%c",&c);
    fseek(f,0,SEEK_SET);
    while(!feof(f))
    {
        int id;
        TRY
        {
            if(!fscanf(f,"%d ",&id))
            {
                printf("\nthrowing");
                THROW;
            }

        }
        CATCH
        {
            break;
        }
        ETRY;


        fscanf(f,"%c",&c);
        fscanf(f,"%c",&c);

        int i=0;
        char name[20];
        while(c!=',')
        {
            name[i++]=c;
            fscanf(f,"%c",&c);
        }
        name[i++]='\0';
        float gpa;
        fscanf(f,"%f",&gpa);
        fscanf(f,"%c",&c);

        struct Student_t student;
        strcpy(student.name,name);
        student.gpa=gpa;
        student.id=id;
        arrayOfStudents[s++]=student;

    }
    display(arrayOfStudents,s);
    return 0;
}
struct Student_t read()
{
    struct Student_t c;
    printf("Enter Student's name");
    scanf("%s",&c.name);
    printf("Enter Student's id");
    scanf(" %d",&c.id);
    printf("Enter Student's gpa");
    scanf(" %f",&c.gpa);
    return c;
}
void add2(struct Student_t* arrayOfStudents,int n)
{
    int i,maxIndex;
    sort(arrayOfStudents,n);
    maxIndex = search(arrayOfStudents,n);
    for(i=0; i<maxIndex; i++)
    {
        arrayOfStudents[i].gpa+=0.2;
    }

}

void display(struct Student_t* arrayOfStudents,int n)
{
    //int n=sizeof(arrayOfStudents)/sizeof(arrayOfStudents[0]),i;
    printf ("\n%8s    %15s   %4s    Grade","ID","Student Name","GPA");
    int i;
    float gpaSum=0;
    float maxGpa=0;
    float minGpa=1000;

    for(i=0; i<n; i++)
    {
        printf ("\n%9d   %15s   %.2f" ,arrayOfStudents[i].id,arrayOfStudents[i].name,arrayOfStudents[i].gpa);
        gpaSum+=arrayOfStudents[i].gpa;
        maxGpa=(maxGpa>arrayOfStudents[i].gpa)?maxGpa:arrayOfStudents[i].gpa;
        minGpa=(minGpa<arrayOfStudents[i].gpa)?minGpa:arrayOfStudents[i].gpa;
        char grade;
        if(arrayOfStudents[i].gpa>=3.5) grade='A';
        else if (arrayOfStudents[i].gpa>=3) grade='B';
        else if (arrayOfStudents[i].gpa>=2.5) grade='C';
        else if (arrayOfStudents[i].gpa>=2) grade='D';
        else grade='F   ';
        printf("      %c",grade);
    }
    printf("\nMinimum of final averages = %.2f",minGpa);
    printf("\nMaximum of final averages = %.2f",maxGpa);
    printf("\n        Average GPA       = %.2f\n\n",gpaSum/n);
}

void getMax(struct Student_t* arrayOfStudents,int n)
{
    sort(arrayOfStudents,n);
    printf ("\n%20s   %d    %.2f" ,arrayOfStudents[n-1].name,arrayOfStudents[n-1].id,arrayOfStudents[n-1].gpa);
}

void sort(struct Student_t* students, int n)
{
    int j,i;

    for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(students[j].gpa >students[j+1].gpa)
            {
                struct Student_t temp = students[j];
                students[j] =students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

int  search(struct Student_t* arrayOfStudents,int n)
{
    sort(arrayOfStudents,n);
    int i=0;
    while(i<n && arrayOfStudents[i].gpa<2) i++;
    return i;
}
void copy(struct Student_t *s2, struct Student_t *s1)
{
    s2 -> gpa = s1 -> gpa;
    s2 -> id = s1 -> id;
    strcpy(s2 -> name,s1 -> name);
}
