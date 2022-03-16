#include<stdio.h>
int alt(int,int);
main()

{
	int a,b;
	printf("enter range ");
	scanf("%d %d",&a,&b);
	
	alt (a,b);
}
int alt(a,b)
{
	for( ;a<=b;a++)
	{
		if (a%2==0)
		  printf("                even number=%d\n",a);
	}
}
