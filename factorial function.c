//factorial function
#include<stdio.h>
int factorial(int a);
main()
{
	int n;
	printf("enter n value : ");
	scanf("%d",&n);
	factorial(n);
}
int factorial(int a)
{
	int i,fact=1;    
    for(i=1;i<=a;i++)   
    	fact=fact*i;    
    printf("Factorial of %d is: %d",a,fact);
}
