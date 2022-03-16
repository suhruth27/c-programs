//no. of digits in a number for loop
#include<stdio.h>
#include<conio.h>
int main ()
{
	int x,n;
	printf("enter n value ");
	scanf("%d", &n);
	for(x=0;n!=0; x++)
	{
		n=n/10;
		
	}
	printf("number of digits in given number is %d",x);
	getch();
	return 0;
}
