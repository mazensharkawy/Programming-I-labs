#include <stdio.h>
#include <stdlib.h>


void maxMin(int* a,int n, int* min, int * max);
int main()
{
    int min,max;
    int a[]={10,5,1,2,3,5,9,15,17,4};
    int n =10;
    maxMin(&a,n, &min,&max);
    printf("Max= %d, Min= %d",max, min);
    return 0;
}
void maxMin(int* a,int n, int* min, int * max)
{
    int i;
    *max=*min=*a;
    for(i=1;i<n;i++)
    {
        //printf("\n%d",*(a+i));
        if(*(a+i)>*max) *max=*(a+i);
        else if ((*(a+i))<*min) *min=*(a+i);
    }
}
