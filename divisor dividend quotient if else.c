// dividend divisor quotient
#include <stdio.h>
#include <conio.h>
int main ()
{
	int divisor,dividend;
	double quotient;
	printf("enter divisor : ");
	scanf("%d",&divisor);
	printf("enter dividend : ");
	scanf("%d",&dividend);
	if(divisor != 0)
		quotient= dividend/divisor;
	else if(divisor==0)
		quotient= divisor;
	printf("divisor : %d", divisor);
	printf("\ndividend : %d", dividend);
	printf("\nquotient : %f", quotient);
	getch();
	return 0;
}
