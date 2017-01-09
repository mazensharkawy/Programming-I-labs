#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,reverse;
    printf("Enter a number to reverse\n");
    scanf("%d",&x);
    reverse=0;
    while(x>0)
    {
        reverse=reverse*10 + x%10;
        x=x/10;
    }
    printf("\n%d",reverse);
    return 0;
}
