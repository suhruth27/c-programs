//sum of digits in a given number for loop
#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,sum,x;
	printf("enter a number : ");
	scanf("%d",&n);
	sum=0;
	for( ;n>0; )
	{
		x= n%10;
		sum = sum + x;
		n=n/10;
	}
	printf("sum of digits in the given number is %d",sum);
	getch();
	return 0;
}
