#include <stdio.h>
#include <stdlib.h>

int checkRightTriangle(int a, int b,int c, float* area, float* perimeter);
int main()
{
    printf("Enter the three sides of triangle\n");
    int a,b,c;
    float area;
    float perimeter;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(checkRightTriangle(a,b,c,&area,&perimeter))
    {
        //printf("RETRUNED");
        printf("Area = %f\nPerimeter = %f",area,perimeter);
    }
    else printf("\nTriangle is not right angled");
    return 0;
}
int checkRightTriangle(int a, int b,int c, float* area, float* perimeter)
{
    double a2=pow(a,2);
    double b2=pow(b,2);
    double c2=pow(c,2);
    //printf("ASSIGNED");
    if(a2+b2==c2 || c2+b2==a2 || a2+c2==b2)
    {
        *area=0.5*a*b;
        *perimeter=a+b+c;
    }
    else if(c2+b2==a2 || a2+c2==b2)
    {
        *area=0.5*c*b;
        *perimeter=a+b+c;
    }
    else if(a2+c2==b2)
    {
        *area=0.5*c*a;
        *perimeter=a+b+c;
    }
    else return 0;
    return 1;
}
