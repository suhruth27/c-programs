//6 subjects grade if else
#include<stdio.h>
#include<conio.h>
int main ()
{
	int sub1, sub2, sub3, sub4, sub5, total;
	float average;
	printf("Enter sub marks\n");
	scanf("%d%d%d%d%d", &sub1,&sub2,&sub3,&sub4,&sub5);
	total = sub1 + sub2 + sub3 + sub4 + sub5;
	average = total/5;
	if(average >=90)
		printf("Your grade is : O");
	else if(average>=80 && average<=89)
		printf("Your grade is : A+");
	else if(average>=70 && average<=79)
		printf("Your grade is : A");
	else if(average>=60 && average<=69)
		printf("Your grade is : B+");
	else if(average>=50 && average<=59)
		printf("Your grade is : B");
	else if(average>=40 && average<=49)
		printf("Your grade is : P");
	else if(average<=45)
		printf("Your grade is : FAIL!!");
	
	getch();
	return 0;
}
