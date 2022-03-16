// alphabet pattern nested loop
#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,j,n;
	int ch=65;
	printf("enter number of lines : ",n);
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++,ch++)
		{
			printf("%c\t",ch);
		}
	}	
getch();
return 0;
}
