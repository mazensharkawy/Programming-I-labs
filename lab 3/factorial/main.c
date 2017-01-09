#include <stdio.h>
#include <stdlib.h>
#include <float.h>
double factorial(double n);
int main()
{
    double x,y;
    printf("ENTER A NUMBER TO CALCULATE IT'S FACTORIAL OR -1 TO EXIT ");
    while(1)
    {
    scanf("%lf",&x);
    if(x<0) return 0;
    y= factorial(x);
    printf("\n%lf",y);
    printf("\nENTER A NUMBER TO CALCULATE IT'S FACTORIAL OR -1 TO EXIT ");
    }
    return 0;
}
double factorial(double n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
