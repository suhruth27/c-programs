//lowercase to upper and vice versa if else
#include<stdio.h>
#include<conio.h>
int main ()
{
	char ch;
	printf("enter a character : ");
	scanf("%c", &ch);
	
	if(ch>='A' && ch<='Z')
		printf("The upper case letter is : %c", ch+32);
	else if(ch>='a' && ch<='z')
		printf("The lower case letter is : %c", ch-32);
	else
		printf("enter a valid character");
	getch();
	return 0;
}
