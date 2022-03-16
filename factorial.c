#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,f=1;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("%d = factorial",f);
	getch();
}
