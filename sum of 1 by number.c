//sum of 1/ number
#include<stdio.h>
#include<conio.h>
int main ()
{
	float n,i;
	float sum;
    printf("enter a number: ");
    scanf("%f",&n);
    i = 1;
    sum = 0;
    while (i<=n)
    {
    	sum = ( sum+(1/i));
    	i++;
	}
	printf("sum is %f",sum);
	getch();
	return 0;
}
