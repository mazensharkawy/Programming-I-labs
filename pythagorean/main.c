#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,b,c2,n;
    n=0;
    scanf("%d",&x);
    for(a=1;a<=x;a++)
    {
        for(b=a;b<=x;b++)
        {
            c2=pow(a,2)+pow(b,2);
            if(sqrt(c2)>x) break;
            if (sqrt(c2)==floor(sqrt(c2)))
            {
                n++;
            }
        }
    }
    printf("%d",n);
}
