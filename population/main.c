#include <stdlib.h>
#include <stdio.h>

int main() {
    long a,b;
    int x,i,counter;
    float ga,gb;
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        scanf("%ld",&a);
        scanf("%ld",&b);
        scanf("%f",&ga);
        scanf("%f",&gb);
        counter=0;
        while(a<=b && counter<101)
        {
            a=(long)a*(1+(ga/100));
            b=(long)b*(1+(gb/100));
            counter++;
            //printf("a=%d b=%d\n",a,b);
        }
        if (counter>100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n",counter);
    }

    return 0;
}
