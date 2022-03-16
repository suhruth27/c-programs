//logical operator
#include<stdio.h>
#include<conio.h>
 
int main()
{
	int a,b;
	printf("enter a value");
	scanf("%d", &a);
	printf("enter b value");
	scanf("%d", &b);
	printf("%d",a && b);
	printf("%d",a || b);
	printf("%d", !a );
	getch();
	return 0;
}
