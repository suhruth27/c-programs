#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	int b;
	float c;
	printf("enter radius of circle");
	scanf("%d",&a);
	b=a*2;
	printf("the diameter of circle is %d \n", b);
	c=2*3.14*b;
	printf("the circumference of circle is %f", c);
	getch();
}
