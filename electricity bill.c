#include <stdio.h>
#include <conio.h>
int main ()
{
	int CR;
	float amount;
	printf("enter your consumption rate ");
	scanf("%d",&CR);
	if (CR<=150)
		{
		amount=(CR*3);
		printf("your bill costs=%f",amount);
	}
	else if ((CR>150) && (CR<=350))
		{amount=((CR*3.75)+100);
		printf("your bill costs=%f",amount);
	}
	else if ((CR>350) && (CR<=450))
		{amount=((CR*4)+250);
		printf("your bill costs=%f",amount);
	}
	else if ((CR>450) && (CR<=600))
		{
		amount=((CR*4.75)+300);
		printf("your bill costs=%f",amount);
	}
	else 
		{
		amount=((CR*5)+400);
		printf("your bill costs=%f",amount);
	}
	getch();
	return (0);
}
