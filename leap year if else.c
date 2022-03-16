// leap year if else
#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("enter a year : ");
	scanf("%d", &year);
	if( year % 4 == 0)
		printf("It is a leap year");
	else if(year % 100 == 0)
		printf("It is a non leap year");
	else
		printf("It is a non leap year");
	
	getch();
	return 0;
}
