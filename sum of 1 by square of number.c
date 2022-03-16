//sum of 1/square number
#include<stdio.h>
#include<conio.h>
#include<math.h>
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
    	sum = ( sum+(1/pow(i,2)));
    	i++;
	}
	printf("sum is %f",sum);
	getch();
	return 0;
}
