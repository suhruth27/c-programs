//armstrong for loop
#include<stdio.h>
#include<conio.h>
int main ()
{
	int num,r,sum=0,temp;

    printf("enter a number: ");
    scanf("%d",&num);

    for(temp=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum+(r*r*r);
    }
    if(sum==temp)
         printf("%d is an Armstrong number.\n",temp);
    else
         printf("%d is not an Armstrong number.\n",temp);
    getch();
    return 0;
}