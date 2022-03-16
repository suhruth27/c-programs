#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	while(i<=n)
{
	if(n%i==0)
	{
		printf("d\n",i);
		}	
		i++;
}
getch();
}
