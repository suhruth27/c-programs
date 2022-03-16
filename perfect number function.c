//perfect number function
#include<stdio.h>
int perfect (int);
int main()
{
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    
    perfect (a);
}
int perfect (a)
{
    int i,s;
    for(i=1,s=0;i<a;i++)
    {
        if(a%i==0)
        {s=s+i;
        printf("%d ",s);
        }
    }
}
