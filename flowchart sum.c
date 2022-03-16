//flowchart sum 
#include <stdio.h>
#include <conio.h>
int main ()
{
	int x,y,z;
	printf("enter x : ");
	scanf("%d",&x);
	printf("enter y : ");
	scanf("%d",&y);
	if(x>0) {
		y=x-1;
		z=2*x;
	}
	else if(y>0) {
		z=y;
		z=z+1;
		printf("%d",z);
    }
	else {
		z=x;
		y=x+1;
		z=z+1;
	}
	
	printf("x = %d",x);
	printf("\ny = %d",y);
	printf("\nz = %d",z);
getch();
return 0;
}
