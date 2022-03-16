//decimals to binary function
#include<stdio.h>
int decimal(int);
main()

{
int a,b;
printf("enter decimal ");
scanf("%d",&a);

b=decimal(a);
printf("\n%d",b);
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
    return b;
}
