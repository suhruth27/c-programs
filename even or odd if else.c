// even number or not using if else
#include<stdio.h>
#include<conio.h>
int main ()
{
	int a;
	printf("enter a value : ");
	scanf("%d", &a);
	if(a % 2 == 0)
		printf("a is a even number.");
	else
		printf("a is an odd number.");
	getch();
	return 0;
}
