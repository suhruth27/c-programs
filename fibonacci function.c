// fibonacci function
#include<stdio.h>
int fibonacci(int number);
main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	fibonacci(n);
}
int fibonacci(int number)
{
	int n1=0,n2=1,n3,i;
 	printf("\n%d %d",n1,n2); 
 	i = 2;
 	while(i<number)
 	{
 		n3=n1+n2;    
	  	printf(" %d",n3);    
	  	n1=n2;    
	  	n2=n3;
	  	++i;
	 }
}
