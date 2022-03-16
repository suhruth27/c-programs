#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		c=c+1;
}
printf("%d",c);
getch();
}
