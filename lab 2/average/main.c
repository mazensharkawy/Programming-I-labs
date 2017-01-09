#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the number of elements\n");
    int sum,n,i;
    scanf("%d",&n);
    int x[n];
    sum=0;
    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        sum+=x[i];
    }
    float average=((float)sum)/n;
    //printf("\n average %f",average);
    //printf("\n%d",sum);
    printf("\nnum  deviation\n");

    for (i=0;i<n;i++) printf("%d    %  .2f\n",x[i],x[i]-average);


    return 0;
}
