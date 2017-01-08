#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{

    float x,a,c,b;
    while(1){
    printf("Enter a number to factorize or -1 to exit ");
    scanf("%f",&x);
    if(x==-1)break;
    //printf("x=%f",x);
    //2345678917
    //152398989
    float square=floorf(sqrt(x));
    c=ceilf(log(x)/log(2));
    c+=square;
    for(a=square; a<=c; a+=0.5)
    {
        b=sqrt(pow(a,2)-x);

        if(floor(b)==b)
        {
            printf("%f %f\n",a-b,a+b);
        }

    }
    //printf("second part\n");
    for(c=floorf(a-b); c>1; c--)
    {
        if(fmodf(x,c)==0)
        {
            printf("%f %f\n",c,x/c);
        }
    }
    printf("done\n");
    }
}
