//link to the question
//https://www.hackerrank.com/challenges/2d-array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows,cols,i,j;
    //printf("Enter the dimensions of the matrix (Rows, Columns)");
    //scanf("%d %d",&rows,&cols);
    rows=cols=6;
    int a[6][6];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int maxsum=-1000;
    for(i=0;i<rows-2;i++)
    {
        for(j=0;j<cols-2;j++)
        {
            int current=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            maxsum=(maxsum>current)?maxsum:current;
        }
    }
    printf("%d",maxsum);
}
