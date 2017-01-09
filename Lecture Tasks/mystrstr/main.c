//Search for something in a string (Ex: search for Sharkawy, in Mazen Maher Sharkawy) AKA needle in a haystack
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int mystcasecmp(char c1, char c2);
int mystrtr(const char* haystack, const char* needle);
int main()
{
    char* ptr=mystrtr("23ab24ab","ab");

    printf("returned %d",ptr);
    ptr=mystrtr("23ab24ab","kk");
    printf("\nreturned %d",ptr);
    printf("\nstrcasecmp returned %d",strcasecmp("C","c"));
}

int mystrtr(const char* haystack, const char* needle)
{
    int j=0,i=0,k;
    while(haystack[i]!= '\0')
    {
        j=0;
        if (haystack[i]!='\0' && needle[j]!='\0' && mystcasecmp(haystack[i],needle[j])==0) k=i;
        while(needle[j]!='\0' && mystcasecmp(haystack[i],needle[j])==0)
        {
            i++;j++;
            if (needle[j+1]=='\0') {return k;}
        }
        i++;
    }
    return -1;
}
//strcasecmp(haystack[i],needle[j])==0
int mystcasecmp(char c1, char c2)
{
    char s1[2],s2[2];
    s1[0]=c1;
    s2[0]=c2;
    s1[1]='\0';
    s2[1]='\0';
    return strcasecmp(s1,s2);
}
