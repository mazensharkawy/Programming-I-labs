#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,sum;
    scanf("%d",&n);
    int forces[n][3];
    for(i=0;i<n;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&forces[i][j]);
        }
    }
    for (j=0;j<3;j++)
    {
        sum=0;
        for(i=0;i<n;i++){
            sum+=forces[i][j];
        }
        if (sum!=0)
        {
        printf("Not in Equilibrium");
        return 0;
        }
    }
    printf("In Equilibrium");
    return 0;
}
