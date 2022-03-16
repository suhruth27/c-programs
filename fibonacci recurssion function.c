//fibonacci recurssion function
#include<stdio.h>
int fib(int);
main()
{
	int n,i=0,c;
	printf("Enter number of terms : ");
	scanf("%d",&n);
	for(c=1;c<=n;c++,i++)
	{
		printf("%d\t", fib(i));
	}
	return 0;
}
int fib(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return (fib(n-1) + fib(n-2));
}
