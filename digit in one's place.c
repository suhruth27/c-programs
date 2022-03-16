// displaying digit at one's place
#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d", &a);
	a = a%10;
	printf("the digit in ones place is %d", a);
	getch();
}
