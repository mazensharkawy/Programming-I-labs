#include <stdio.h>
#include <stdlib.h>

void sortStrings( int n, char** str);
int main()
{
    int i,k;
    char** a= (char**) malloc(sizeof(char*)*5);
    char b[5][10]={"trevor","lester","michael","franklin","amanda"};
    for(i=0; i<5; i++) {
        a[i]=(char*)malloc(sizeof(char)*10);
        strcpy(a[i],b[i]);}

    for(i=0; i<5; i++) printf("%s ",a[i]);
    //printf("%s ",a[0]);
    printf("\n\n");
    sortStrings(5,a);
    //printf("done sorting \n");
    for(i=0; i<5; i++) printf("%s ",a[i]);
    printf("\n\n");
    return 0;
}

void sortStrings( int n, char** str){
    int i,j,k;
    char* temp= (char*) malloc(sizeof(char)*10);

    for (k = 0; k < n; k++)
    {
        for (j = 0; j < n ; j++)
        {
            //printf("sorting \n");
            //printf("%c \n",&str[j][0]);
            if (strcmp(str+j, str+j + 1) < 0)
            {
                //printf("sorting \n");
                strcpy(temp, str+j);
                //printf("temp copied \n");
                strcpy(str+j, str+j+ 1);

                strcpy(str+j+1, temp);
            }
        }
    }
}
