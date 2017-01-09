#include <stdio.h>
#include <stdlib.h>
double positive_power(int x,int y);
double power(int x,int y);
double negative_power(int x,int y);

int main()
{
    printf("Testing the Power function\n TEST CASES INCOMING !");

    printf("\n(5^5)   %lf",power(5,5));
    printf("\n(5^-5)   %lf",power(5,-5));
    printf("\n(5^0)   %lf",power(5,0));
    printf("\n(5^1)   %lf",power(5,1));
    printf("\n(12^6)   %lf",power(12,6));
    printf("\n(-5^-3)   %lf",power(-5,-3));

    return 0;
}
double positive_power(int x,int y) {return (y==1)? 1.0*x :1.0*x*positive_power(x,y-1);}

double negative_power(int x,int y) {return (y==1)? 1.0/x :(1.0/x)*negative_power(x,y+1);}

double power(int x,int y)
 {
    if(y==0) return 1;
    else if(x==0) return 0;
    return (y>1)? positive_power(x,y) : negative_power(x,y);
}
