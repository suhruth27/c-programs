// paise to rupees 14-12-21
#include<stdio.h>
#include<conio.h>
int main()
{
	float rs;
	int ps;
	printf("\n enter number of paise");
	scanf("%d",&ps);
	rs = ps/100;
	printf("\n number of rupees %f",rs);
	getch();
	return 0;
}
