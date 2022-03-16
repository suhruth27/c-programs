//duck number if else
#include<stdio.h>
main()
{
	int n,x;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        if(x==0)
        {
            break;
        }
        
        n/=10;
    }
    if(x==0)
    printf("The number is duck");
    else
    printf("The number is not duck");
    
}
