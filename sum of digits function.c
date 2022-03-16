// sum of digits function
#include<stdio.h>
int sum_of_digits(int n);
main()
{
	int x;
	printf("enter a number : ");
	scanf("%d",&x);
	sum_of_digits(x);
}
int sum_of_digits(int n)
{
	int m,sum = 0;
	while(n>0)
	{
		m= n%10;
		sum= sum + m;
		n= n/10;
	}
	printf("sum of its digits is : %d", sum);
}
