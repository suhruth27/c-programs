//sum and avg of n natural numbers for loop
#include<stdio.h>
#include<conio.h>
int main ()
{
	float n,i,sum,avg;
	printf("enter n value :");
	scanf("%f", &n);
	for(i=1; i<=n; i++)
	{
		printf("%f\n", i);
		sum = sum + i;
	}
	avg = sum/n;
	printf("Sum of %f natural numbers is: %f\n",n,sum);
	printf("Average of %f natural numbers is: %f",n,avg);
	getch();
	return 0;
}
