// largest among two numbers if else
#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b;
	printf("enter a value : ");
	scanf("%d", &a);
	printf("enter b value : ");
	scanf("%d", &b);
	if(a>b)
		printf("a is greater than b.");
	else if(a==b)
		printf("a and b are equal.");
	else
		printf("b is greater");
	getch();
	return 0;
}
