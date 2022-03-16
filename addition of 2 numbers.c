#include<stdio.h>
#include<conio.h>
int main(void)
{
	int a;
	int b;
	int c;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a second number");
	scanf("%d",&b);
	c = a+b;
	printf("the sum of %d and %d is %d",a,b,c);
	getch();
	return 0;
}
