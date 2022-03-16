#include<stdio.h>
int swap(int,int);
main()

{
	int a,b;
	printf(" enter 2 numbers ");
	scanf("%d %d",&a,&b);
	printf("initially\na= %d \nb= %d \n",a,b);
	
	swap(a,b);

}
int swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap\na= %d \nb= %d \n",a,b);
}
