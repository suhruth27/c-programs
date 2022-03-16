//length of a number function
#include<stdio.h>
int length(int);
main()

{
	int a,b;
	printf("enter a number ");
	scanf("%d",&a);
	
	b= length(a); 
	printf("number of digits are %d",b);
}
int length(a)
{
	int b;
	for (b=0;a>=1; )
	 {
	   b++; 
	   a=a/10;
	 }
	return b; 
}
