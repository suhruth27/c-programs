//lowercase and uppercase function
#include<stdio.h>
void character(char ch);
main()
{
	char n;
	printf("enter a letter : ");
	scanf("%c",&n);
	character(n);
}
void character(char ch)
{
	/*int a;
	ch= getchar();
	a = ch;*/
	if(ch>=97 && ch<=122)
	{
		printf("the upper case letter is %c", ch-32);
    }
	else if(ch>=65 && ch<=90)
	{
		printf("the lowercase letter is %c", ch+32);
	}
}
