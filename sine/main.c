#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,exponent;
    float sine=0;
    float x;
    printf("Enter an angle to calculate it's sine ");
    scanf("%f",&x);
    printf("\nEnter the number of terms in taylor series ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        exponent=(i*2)-1;
        sine+=(pow(x,exponent)/factorial(exponent))*(pow(-1,i+1));
    }
    printf("\n The answer is %f",sine);
}
int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
