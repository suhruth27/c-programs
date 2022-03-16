//palindrome function- if number is reversed- it must be same
#include<stdio.h>
int palindrome(int num);
main()
{
	int n;
	printf("enter n value : ");
	scanf("%d",&n);
	palindrome(n);
}
int palindrome(int num)
{
	int r,sum=0,t;

    for(t=num;num!=0;num=num/10)
	{
         r=num % 10;
         sum=sum*10+r;
    }
    if(t==sum)
         printf("%d is a palindrome number.\n",t);
    else
         printf("%d is not a palindrome number.\n",t);
}
