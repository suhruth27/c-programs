//6 subjects grade if else
#include<stdio.h>
#include<conio.h>
int main ()
{
	int sub1, sub2, sub3, sub4, sub5, sub6, total;
	float percentage;
	printf("enter sub1 marks : \n");
	scanf("sub1 : %d", &sub1);
	printf("enter sub2 marks : \n");
	scanf("sub2 : %d", &sub2);
	printf("enter sub3 marks : \n");
	scanf("sub3 : %d", &sub3);
	printf("enter sub4 marks : \n");
	scanf("sub4 : %d", &sub4);
	printf("enter sub5 marks : \n");
	scanf("sub5 : %d", &sub5);
	printf("enter sub6 marks : \n");
	scanf("sub6 : %d", &sub6);
	total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
	percentage = (total/600)*100;
	if(percentage >=90)
		printf("Your grade is : O");
	else if(80>=percentage<=89)
		printf("Your grade is : A+");
	else if(70>=percentage<=79)
		printf("Your grade is : A");
	else if(60>=percentage<=69)
		printf("Your grade is : B+");
	else if(50>=percentage<=59)
		printf("Your grade is : B");
	else if(40>=percentage<=49)
		printf("Your grade is : P");
	else if(percentage<=45)
		printf("Your grade is : A+");
	
	getch();
	return 0;
}
