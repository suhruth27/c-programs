// armstrong function- sum of cubes of digits of a 3 digit number should be equal to the number
#include<stdio.h>
int armstrong(int num);
main()
{
	int n;
	printf("enter n value : ");
	scanf("%d",&n);
	armstrong(n);
}
int armstrong(int num)
{
	int r,sum=0,temp;

    for(temp=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum+(r*r*r);
    }
    if(sum==temp)
         printf("%d is an Armstrong number.\n",temp);
    else
         printf("%d is not an Armstrong number.\n",temp);
}
