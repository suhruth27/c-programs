//palindrome for loop
#include<stdio.h>
#include<conio.h>
int main ()
{
	int num,r,sum=0,t;

    printf("enter a number: ");
    scanf("%d",&num);

    for(t=num;num!=0;num=num/10)
	{
         r=num % 10;
         sum=sum*10+r;
    }
    if(t==sum)
         printf("%d is a palindrome number.\n",t);
    else
         printf("%d is not a palindrome number.\n",t);
	getch();
	return 0;
}
