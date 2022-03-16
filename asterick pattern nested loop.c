// asterick pattern nested loop
#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,j,n;
	printf("enter number : ");
	scanf("%d",&n);
	for(i=1; j<=n; i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("*\t");
		}
	}
	getch();
	return 0;
}
