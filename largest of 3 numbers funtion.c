//largest of 3 numbers funtion
#include<stdio.h>
int largest(int a, int b, int c);
main()
{
	int n1,n2,n3,large;
	printf("enter 3 numbers : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	large= largest(n1, n2, n3);
	printf("the largest is %d", large);
}
int largest(int a, int b, int c)
{
	if( a>b && a<c)
		return a;
	if(b>a && b>c)
		return b;
	else
		return c;
}
