//print upto n natural numbers
#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,i;
	printf("enter n value ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("%d\n", i);
	}
	getch();
	return 0;
}
