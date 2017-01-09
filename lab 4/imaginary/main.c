#include <stdio.h>
#include <stdlib.h>
struct cmplx add(struct cmplx c1, struct cmplx c2);
void print(struct cmplx c);
struct cmplx read();
void addByReference(struct cmplx *c, int value);
int compare(struct cmplx c1, struct cmplx c2);

struct cmplx{
        float real;
        float i;
    };
int main()
{
    struct cmplx c1,c2;
    c1.real=5;c1.i=3;
    c2.real=2;c2.i=4;
    printf("adding ... output is "); print(add(c1,c2));
    printf("\n printing c1... output is "); print(c1);
    printf("\n comparing (c1,c2)... output is %d",compare(c1,c2));
    printf("\n comparing (c2,c1)... output is %d",compare(c2,c1));
    printf("\n comparing (c1,c1)... output is %d",compare(c1,c1));
    addByReference(&c1,3);
    printf("adding by reference (c1 + 3) ... output is "); print(c1);
    return 0;
}

struct cmplx add(struct cmplx c1, struct cmplx c2)
{
    struct cmplx c3;
    c3.real=c1.real+c2.real;
    c3.i=c1.i+c2.i;
    return c3;
}

void print(struct cmplx c){
    if(c.i>0)printf("\n%.2f + %.2f i",c.real,c.i);
    else printf("\n%.2f %.2f i",c.real,c.i);
    }

struct cmplx read()
{
    struct cmplx c;
    printf("enter the real value");
    scanf(" %f",&c.real);
    printf("enter the imaginary value");
    scanf(" %f",&c.i);
    return c;
}

void addByReference(struct cmplx *c, int value)
{
    c->real+=value;
}

int compare(struct cmplx c1, struct cmplx c2)
{
    float v1 = sqrt(c1.i*c1.i+c1.real*c1.real);
    float v2 = sqrt(c2.i*c2.i+c2.real*c2.real);
    if(v1==v2) return 0;
    else return (v1>v2)? 1:-1;
}
