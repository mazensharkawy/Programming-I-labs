#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j;
    int i=0;
    char string[100];
    scanf("%s", &string[0]);
    while(string[i]!='\0') i++;

    printf("\n");
    for(j=0;j<i-1;j++)
    {
        if(string[j]!=string[i-j-1])
        {
            printf("not palindrome");
            return 0;
        }
    }
    printf("palindrome");
}
