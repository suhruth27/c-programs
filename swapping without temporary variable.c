#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	int b;
	printf("enter a");
	scanf("%d", &a);
	printf("enter b");
	scanf("%d", &b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("a = %d\n", a);
	printf("b = %d", b);
	getch();
}
