// positive negative if else
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d", &n);
	if( n > 0)
		printf("It is a positive number");
	else if(n < 0)
		printf("It is a negative number");
	else
		printf("It is not an integer");
	
	getch();
	return 0;
}
