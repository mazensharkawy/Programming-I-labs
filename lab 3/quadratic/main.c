#include <stdio.h>
#include <stdlib.h>

int calculateRoots(int a, int b, int c, float* root1, float* root2);
int main()
{
    int a,b,c;
    float root1,root2;
    printf("Enter a, b and c of the quadratic equation aX^2 + bX + c\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    //printf("\n a =%d b =%d c =%d",a,b,c);
    int determinant=calculateRoots(a,b,c,&root1,&root2);
    printf("\n Determinant =%d",determinant);
    switch(determinant)
    {
        case 0: printf("\nroot= %f",root1);break;
        case 1: printf("\nroot1= %f, root2= %f",root1,root2);break;
        case -1: printf("\nroot1= %f i, root2= %f i",root1,root2);break;

    }
    return 0;
}
/* Returns 1 if there are 2 real roots, 0 if there is only one, -1 if there are two imaginary roots
** updates the roots through the pointers
*/
int calculateRoots(int a, int b, int c, float* root1, float* root2)
{
    float determinant= (b*b)-(4*a*c);
    printf("/nDeterminantF =%f",determinant);
    if(determinant>0)
    {
        *root1=((1.0*b)+sqrt(determinant))/(2.0*a);
        *root2=((1.0*b)-sqrt(determinant))/(2.0*a);
        return 1;
    }
    else if (determinant<0)
    {
        *root1=((1.0*b)+sqrt(determinant))/(2.0*a);
        *root2=((1.0*b)-sqrt(determinant))/(2.0*a);
        return -1;
    }
    else
    {
        *root1= (1.0*b)/(2*a);
        return 0;
    }
}
