#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	int b;
	int tv;
	printf("enter a");
	scanf("%d", &a);
	printf("enter b");
	scanf("%d", &b);
	tv = a;
	a = b;
	b = tv; 
	printf("a = %d\n", a);
	printf("b = %d", b);
	getch();
}
