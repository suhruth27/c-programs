//factorial recurssion function
#include<stdio.h>
int fact(int n);
main()
{
	int a;
	printf("enter a number : ");
	scanf("%d", &a);
	printf("The factorial of %d is %d.",a,fact(a));
}
int fact(int n)
{
	if(n==1)
		return 1;
	else
		return n * fact(n-1);
}
