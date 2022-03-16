#include<stdio.h>
#include<conio.h>
int main ()
{
	int min,max;
	printf("enter min and max numbers");
	scanf("%d%d",&min,&max);
	for (	;min<=max;min++)
	{
		if (min%2==0)
		printf("%d is even\n",min);
		else
		printf("%d is odd\n",min);
	}
	getch();
	return 0;
}
