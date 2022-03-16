//binary to decimal function
#include<stdio.h>
#include<math.h>
int binary(int);
main()

{
int n,c ;
printf("enter binary number ");
scanf("%d",&n);

c=binary(n);
printf("%d",c);
}
int binary(a)
{
	int b,c,i;
	for (c=0,i=0 ;a>0;i++ , a/=10 )
{
	b=a%10;
	c=c+pow(2,i)*b;
}
    return c;
}
