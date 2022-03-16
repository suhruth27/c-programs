//sum of n/n+1
#include<stdio.h>
#include<conio.h>
int main ()
{
	float n,i,x,y;
	float sum;
    printf("enter a number: ");
    scanf("%f",&n);
    i = 1;
    sum = 0;
    while (i<=n)
    {
    	sum = ( sum+(x/y));
    	x++;
    	y++;
	}
	printf("sum is %f",sum);
	getch();
	return 0;
}
