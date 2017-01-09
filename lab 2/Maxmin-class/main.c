#include <stdio.h>
#include <stdlib.h>
void MaxMin (int a, int b, int c, int *min, int *max);
int main()
{
    int a=15;
    int b=12;
    int c=18;
    int *max;
    int *min;
    MaxMin (a, b, c, &min, &max);
    printf("Min is %d and Max is %d",min, max);
}
void MaxMin (int a, int b, int c, int *min, int *max)
{
    printf("called successfully");
    *min=*max=a;
    printf("assigned successfully");
    if(b>*max) *max=b;
    else if(b<*min) *min=b;

    if(c>*max) *max=c;
    else if(c<*min) *min=c;


}
