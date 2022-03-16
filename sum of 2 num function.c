#include<stdio.h>
int sum(int a, int b);
main()
{
	int a,b,d;
	printf("enter 2 numbers : ");
	scanf("%d%d",&a,&b);
	d= sum(a,b);
	printf("%d",d);
}
int sum(int a, int b)
{
	int c=0;
	c= a+b;
	return c;
}
