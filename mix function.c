//mix function
#include<stdio.h>
#include<math.h>
int armstrong(int);
int perfect (int);
int binary(int);
int decimal(int);
int duck(int);
int e_o(int);
int fibonacci(int);
int fact(int);
int length(int);
int prime(int);
int reverse(int);
int strong(int);
int sum(int);
int main()
{
    int a,n;
    printf("enter a program you want to execute\n1 for Armstrong number\n2 for perfect number\n3 for binary to decimal\n4 for decimal to binary\n5 for duck number\n6for even or odd\n7for Fibonacci series\n8 for factorial\n9 for length of a number\n10 for prime check\n11 for reverse of a number\n12 for strong number\n13 for sum of digits ");
    scanf("%d",&n);
    printf("enter your desired number ");
    scanf("%d",&a);
    switch(n)
    {
    		case 1:
			   armstrong (a);
		   	break;
    
     case 2:
     perfect(a);
     break;
    
     case 3:
     binary(a);
     break;
    
     case 4:
     decimal(a);
     break;
    
     case 5:
     duck (a);
     break;
     
     case 6:
     e_o(a);
     break;
    
     case 7:
     fibonacci(a);
     break;
    
     case 8:
     fact(a);
     break;
    
     case 9:
     length(a);
     break;
    
     case 10:
     prime(a);
     break;
    
     case 11:
     reverse(a);
     break;
     
     case 12:
     strong (a);
     break;
    
     case 13:
     sum(a);
     break;
    }
}
int perfect (a)
{
    int i,s;
    for(i=1,s=0;i<a;i++)
    {
        if(a%i==0)
        {
        s=s+i;
        }
    }
    if(s==a)
            printf("it's a perfect number");
        else
            printf("it's not a perfect number");
}
int armstrong(a)
{
	int c,d,b,s,x;
	c=a;
	
	for(x=a,d=0;x>=1; )
	{
		d++;
		x/=10;
	}
    
    for(s=0;a>=1; )
    {
    	b=a%10;
    	s=s+pow(b,d);
    	a/=10;
	}
	if (s==c)
	  printf("it's a armstrong number");
	else
	  printf("it's not a armstrong number");
}
int binary(a)
{
	int b,c,i;
	for (c=0,i=0 ;a>0;i++ , a/=10 )
{
	b=a%10;
	c=c+pow(2,i)*b;
}
    printf("%d",c);
}
int decimal(a)
{
	int rem,b=0,i=1;
	for ( ;a>0; )
    {
       rem=a%2;
       a/=2;
       b=b+rem *i;
       i=i*10;
    }
    printf("\n%d",b);
}
int duck(a)
{
	int b;
	for(b=0;a>=1; )
	{
		b=a%10;
		if(b==0)
		{
		break;
		}
		a/=10;
	}
	if(b==0)
		printf("it's a duck numbner");
	else
        printf("it's not a duck number");
}
int e_o(a)
{
	if (a%2==0)
	  printf("it's even");
	else
	  printf("it's odd");
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
int fact(a)
{
	int i,f;
	for (i=1,f=1;i<=a;i++)
	{
		f=f*i;
	}
     printf("factorial of %d is %d\n",a,f);
    return f;
}
int length(a)
{
	int b;
	for (b=0;a>=1; )
	 {
	   b++; 
	   a=a/10;
	 }
	    printf("number of digits are %d",b);
}
int prime(a)
{
	int i,f;
	for (i=1,f=0;i<=a;i++)
	{
		if (a%i==0)
		  f++;
	}
	if (f==2)
	printf("%d is prime",a);
	else
	  printf("%d is not a prime",a);
}
int reverse(a)
{
	int b,c,s;
	for(c=0,s=0;a>=1; )
    {
    	b=a%10;
    	s=s*10+b;
    	a/=10;
	}
	printf("reverse is %d",s);
}
int strong(a)
{
	int b,i,f,s,x,c;
	for (c=a,s=0;c>=1;c/=10 )
	{
		b=c%10;
	 f= fact(b);
	 s=s+f;
	}
    if (a==s)
      printf("it's a strong number");
    else
      printf("it's not a strong number");
}
int sum(a)
{
	int b,c,s;
	for(c=0,s=0;a>=1; )
    {
    	b=a%10;
    	s=s+b;
    	a/=10;
	}
	    printf("sum of digitss is %d",s);
}
