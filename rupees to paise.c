//rupees to paise conversion
#include<stdio.h>
#include<conio.h>
int main()
{
	int rupees,paise;
	printf("Enter number of rupees:");
	scanf("%d",&rupees);
	paise = rupees*100;
	printf("after rupees is converted to paise: %d", paise);
	getch();
	return 0;
}
