//fibonacci series function
#include<stdio.h>
int fibonacci(int);
main()

{
	int a,b,c,d;
	printf("Enter ending number ");
	scanf("%d",&a);
	printf("fibonacci series is \n");
	
    fibonacci(a);
}
int fibonacci(a)
{
	int b,c,d;
	for (b=0,c=1,d=0;a>=d; )
	{
		if (a>=b&&a>=c)
		  printf("%d\n%d\n",b,c);
		else 
		  printf("%d\n",b);
        d=b+c;
        c=c+d;
        b=d;
	}
}
