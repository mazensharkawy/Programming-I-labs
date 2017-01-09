#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f1;FILE* f2;
    char ch;
    f1=fopen("a.txt","r");
    if(f1==NULL){printf("error reading file ");exit(1);}
    f2=fopen("b.txt","w");
    if(f2==NULL){printf("error creating file ");exit(1);}
    fscanf(f1,"%c",&ch);
    while(!feof(f1))
    {
        fprintf(f2,"%c",ch);
        fscanf(f1,"%c",&ch);
    }
    printf("files copied");
    fclose(f1);
    fclose(f2);
}
