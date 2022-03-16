//reverse order of a number
#include<stdio.h>
int main ()
{
	int x,rev,n;
	printf("enter n value ");
	scanf("%d", &n);
	for( ;n>0; )
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}
	printf("the reverse order is : %d",rev);
	
	getch();
	return 0;
}
