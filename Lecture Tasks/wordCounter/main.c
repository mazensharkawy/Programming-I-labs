//count words in a file
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1;
    f1=fopen("input.txt","r");
    if(f1==NULL)
    {
        printf("error reading file");
        exit(1);
    }
    printf("%d",count(f1) );

    f1=fopen("input- Copy.txt","r");
    if(f1==NULL)
    {
        printf("\nerror reading file");
        exit(1);
    }
    printf("\n%d",count(f1) );
    return 0;
}
int count(FILE* file)
{
    char c;
    int flag=0;
    int counter=0;
    fscanf(file,"%c",&c);
    if(c!=NULL && c!=' ') {counter++;flag=1;}
    while(!feof(file))
    {
        fscanf(file,"%c",&c);
        if (c==' ' && flag==1) {counter++;flag=0;}
        else if (c=='\n' ){
            if(flag==0) counter++;
            flag=0;
            }
        else {flag=1;}

    }
    if (flag==0) counter--;
    return counter;
}
