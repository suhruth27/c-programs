//age if else
#include<stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	if(age<=12)
	{
		printf("i am a kid");
	}
	else if(age>=13 && age <=19)
	{
		printf("i am a teen");
	}
	else if(age>=20 &&age<=50)
	{
		printf("i am a youth");
	}
	else if(age>=50 && age <=80)
	{
		printf("i am old");
	}
return 0;
}
