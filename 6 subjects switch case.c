//6 subjects grade switch case
#include<stdio.h>
#include<conio.h>
int main ()
{
	int sub1, sub2, sub3, sub4, sub5, average, total;
	
	printf("enter sub marks :\n");
	scanf("%d%d%d%d%d", &sub1,&sub2,&sub3,&sub4,&sub5);
	total = sub1 + sub2 + sub3 + sub4 + sub5;
	average = total/5;
	switch(average)
	{
		case 90 ... 100 : printf("Your grade is 'O' ");
		break;
		case 80 ... 89 : printf("Your grade is 'A+' ");
		break;
		case 70 ... 79 : printf("Your grade is 'A' ");
		break;
		case 60 ... 69 : printf("Your grade is 'B+' ");
		break;
		case 50 ... 59 : printf("Your grade is 'B' ");
		break;
		case 45 ... 49 : printf("Your grade is 'C+' ");
		break;
		case 40 ... 44 : printf("Your grade is 'C' ");
		break;
		default: printf("\nFailed\nBetter Luck Next Time");
		break;
	}
	
	
	getch();
	return 0;
}
