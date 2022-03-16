// lower case to upper case
#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	char ch;
	printf("enter a lower case letter");
	ch= getchar();
	a = ch;
	printf("the upper case letter is %c", a-32);
	getch();
}
