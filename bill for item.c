//Program to calculate the bill for item ,given its quantity sold,value,discount,tax
#include<stdio.h>
#include<conio.h>
int main()
{
	float quantity,value,discount,tax,bill;
	
	printf("Enter quantity of items sold:");
	scanf("%f",&quantity);
	printf("Enter value of 1 item:");
	scanf("%f",&value);
	printf("Enter discount to be given:");
	scanf("%f",&discount);
	printf("Enter tax to be included:");
	scanf("%f",&tax);
	
	bill=(quantity*value)-((quantity*value)*discount/100)+((quantity*value)*tax/100);
	
	printf("Total bill is %f",bill);
	getch();
	return 0;
}


