#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i,j,k,ky,ku,temp,flag;
    scanf("%d",&n1);
    while(n1>20 || n1<0) scanf("%d",&n1);
    int x[n1];
    j=k=0;
    for(i=0;i<n1;i++)
    {
        flag=1;
        scanf("%d",&temp);
        for(j=0;j<k;j++)
        {
            if(temp==x[j])
            {
                flag=0;
                break;
            }
        }
        if(flag) x[k++]=temp;
    }
    scanf("%d",&n2);
    while(n2>20 || n2<0) scanf("%d",&n2);
    int y[n2];
    j=ky=0;
    for(i=0;i<n2;i++)
    {
        flag=1;
        scanf("%d",&temp);
        for(j=0;j<ky;j++)
        {
            if(temp==y[j])
            {
                flag=0;
                break;
            }
        }
        if(flag) y[ky++]=temp;
    }
    int intersect[20];
    if(k>0) printf("Array1: ");
    else printf("Array1:");

    for(i=0;i<k-1;i++) printf("%d, ",x[i]);
    if(k>0) printf("%d",x[k-1]);

    if(ky>0) printf("\nArray2: ");
    else printf("\nArray2:");
    for(i=0;i<ky-1;i++) printf("%d, ",y[i]);
    if(ky>0) printf("%d",y[ky-1]);


    if(k>0 && ky>0) printf("\nUnion: ");
    else printf("\nUnion:");
    for(i=0;i<k-1;i++) printf("%d, ",x[i]);
    if(k>0) printf("%d",x[k-1]);


    for(i=0;i<ky;i++)
    {
        flag=1;
        for(j=0;j<ky;j++)
        {
            if(y[i]==x[j])
            {
                flag=0;
                break;
            }

        }

        if(i==0 && flag && k==0) printf("%d",y[i]);
        else if(flag) printf(", %d",y[i]);

    }
    ku=0;
    for(i=0;i<k;i++)
    {
        for(j=0;j<ky;j++)
        {
            if(x[i]==y[j])
            {
                intersect[ku++]=x[i];
                break;
            }
        }
    }

    if(ku>0) printf("\nIntersection: ");
    else printf("\nIntersection:");
    for(i=0;i<ku-1;i++) printf("%d, ",intersect[i]);
    if(ku>0) printf("%d",intersect[ku-1]);
    return 0;
}
