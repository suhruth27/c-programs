// length of a number
#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,count;
	printf("enter n value :");
	scanf("%d", &n);
	for( ;n!=0;count = count + 1)
	{
		n = n/10;
	}
	printf("length of the given number is : %d",count);
	getch();
	return 0;
}
