//duck nnumber function
#include<stdio.h>
int duck(int);
main()

{
	int a;
	printf("enter a number ");
	scanf("%d",&a);
	
    duck(a);
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

