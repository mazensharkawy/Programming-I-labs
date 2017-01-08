#include <stdio.h>
#include <stdlib.h>

int main()
{
    //93084
    //371
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int current=x;
    int sum=0;
    int digit;
    int length=0;
    while(current>0)
    {
        length++;
        current=current/10;
    }
    current=x;
    while(current>0)
    {
        digit=current%10;
        current=current/10;
        sum+=pow(digit,length);
    }
    if(sum==x) printf("It's an armstrong number");
    else printf("It's not an armstrong number");
}
