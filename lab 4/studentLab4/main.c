#include <stdio.h>
#include <stdlib.h>
#include <String.h>
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
    //arrayOfStudents[0]=read();
    struct Student_t s;
    s.id=4301;strcpy(s.name,"Mazen Maher");s.gpa=2.94;
    arrayOfStudents[0]=s;
    s.id=4251;strcpy(s.name,"Mariam Mohamed");s.gpa=1.73;
    arrayOfStudents[1]=s;
    display(arrayOfStudents,2);
    printf("\n***Sorting***");
    sort(arrayOfStudents,2);
    display(arrayOfStudents,2);
    printf("\n***addding 0.2 for GPAs <2***");
    add2(arrayOfStudents,2);
    display(arrayOfStudents,2);
    printf("\n***MAX***");
    getMax(arrayOfStudents,2);
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
    for(i=0;i<maxIndex;i++)
    {
        arrayOfStudents[i].gpa+=0.2;
    }

}

void display(struct Student_t* arrayOfStudents,int n)
{
    //int n=sizeof(arrayOfStudents)/sizeof(arrayOfStudents[0]),i;
    printf ("\n%15s   %8s    %4s","Student Name","ID","GPA");
    int i;
    for(i=0;i<n;i++){
        printf ("\n%-20s   %d    %.2f" ,arrayOfStudents[i].name,arrayOfStudents[i].id,arrayOfStudents[i].gpa);
    }
}

void getMax(struct Student_t* arrayOfStudents,int n)
{
    sort(arrayOfStudents,n);
    printf ("\n%20s   %d    %.2f" ,arrayOfStudents[n-1].name,arrayOfStudents[n-1].id,arrayOfStudents[n-1].gpa);
}

void sort(struct Student_t* students, int n) {
    int j,i;

    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
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
