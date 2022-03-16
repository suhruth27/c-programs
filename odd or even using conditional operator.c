//odd or even using conditional operator 9-12-21
#include <stdio.h>
#include <conio.h>
int main()
{
	int a;  
    printf("Please Enter a value\n");  
    scanf("%d", &a);  
    
    if(a % 2 == 0) 
    {
        printf("%d is even\n", a);          
    } 
    else 
    {
	printf("odd\n");
    }
   
   getch();
   return 0;
}
