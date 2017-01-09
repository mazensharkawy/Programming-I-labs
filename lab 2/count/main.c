#include <stdio.h>
#include <stdlib.h>

int main()
{

	int counter=0;
	int x;
	scanf("%d",&x);
	while(x>0)
	{

		x=x/10;
		counter++;
	}
	printf("\n%d",counter);
}
