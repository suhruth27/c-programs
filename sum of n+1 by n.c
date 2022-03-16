//sum of n/n+1
#include<stdio.h>
#include<conio.h>
int main ()
{
	float n,i,x,y;
	float sum;
    printf("enter a number: ");
    scanf("%f",&n);
    x = 1;
    y = 2;
    sum = 0;
    while (x<=n && y<=n+1)
    {
    	sum = ( sum+(x/y));
    	x++;
    	y++;
	}
	printf("sum is %f",sum);
	getch();
	return 0;
}
