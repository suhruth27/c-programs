#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	int a;
	printf("enter character");
	ch= getchar();
	a = ch;
	ch = ch+1;
	printf(" next character of the given character is %c", ch);
	getch();
}
