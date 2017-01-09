#include <stdio.h>
#include <stdlib.h>

void main()
{
    int z,x,i,j,m,n,k,sum;
    printf("Enter the dimensions m, n, k where m*n , n*k ");
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&k);
    int a[m][n];
    int b[n][k];
    int c[m][k];
    printf("Enter the matrix no 1 ");
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++) scanf("%d",&a[j][i]);
    }

    printf("Enter the matrix no 2 ");
    for(j=0;j<n;j++)
    {
        for(i=0;i<k;i++) scanf("%d",&b[j][i]);
    }

    for (j=0;j<m;j++)
    {
        for(i=0;i<k;i++)
        {
            c[j][i]=0;

            for(z=0;z<n;z++) c[j][i]+=(a[j][z]*b[z][i]);

        }
    }

    for(j=0;j<m;j++)
    {
        for(i=0;i<k;i++) printf("%d  ",c[j][i]);
        printf("\n");
    }
}

