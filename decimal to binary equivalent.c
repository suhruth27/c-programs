// decimal to binary equivalent
#include<stdio.h>
#include<conio.h>
int main ()   
{
	int n,i,r,p;
	printf("enter any decimal number");
	scanf("%d",&n);
	i = 0;
	p = 1;
	while (n>0)
	{
		r= n%2;
		n= n/2;
		i= i+(r*p);
		p= p*10;
	}	
	printf("%d",i);
	getch();
	return 0;
}
