#include<stdio.h>
void towers(int n, char source, char dest, char aux)
{
	static int step=0;
	printf("Towers (%d,%c,%c,%c)\n",n,source,dest,aux);
	if(n==1)
		printf("\t\t\tstep %3d : Move from %c to %c\n",++step,source,dest);
	else
	{
		towers(n-1,source,aux,dest);
		printf("\t\t\tstep %3d : Move from %c to %c\n",++step,source,dest);
		towers(n-1,aux,dest,source);
	}
}
main()
{
	char s,d,a;
	int disc;
	printf("enter 3 towers: ");
	scanf("%c%c%c",&s,&d,&a);
	printf("enter number of discs: ");
	scanf("%d",&disc);
	towers(disc,s,d,a);
}
