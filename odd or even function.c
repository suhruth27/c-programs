// odd or even function
#include<stdio.h>
int num(int x);
main()
{
	int a;
	printf("enter a value :");
	scanf("%d",&a);
	num(a);
	printf("\nend of program");
}
int num(int x)
{
	if(x%2==0)
		printf("it is an even number");
	else
		printf("it is an odd number");
}
