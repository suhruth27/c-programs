//simple_interest
#include<stdio.h>
#include<conio.h>
int main(void)
{
	int p;
	int t;
	float r;
	float si;
	printf("enter p");
	scanf("%d",&p);
	printf("enter t");
	scanf("%d",&t);
	printf("enter r");
	scanf("%f",&r);
	si=(p*t*r)/100;
	printf("the si is %f", si);
	getch();
	return 0;
}
