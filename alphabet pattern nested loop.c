// alphabet pattern nested loop
#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c\t",(char)(j+96));
        }
 
        printf("\n");
    }
getch();
return 0;
}
