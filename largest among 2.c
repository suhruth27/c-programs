//largest among 2 using conditional operator 9-12-21
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b;  
    printf("Please Enter Two different values\n");  
    scanf("%d %d", &a, &b);  
    
    if(a > b) 
    {
        printf("%d is Largest\n", a);          
    } 
    else if (b > a)
    { 
        printf("%d is Largest\n", b);  
    } 
    else 
    {
	printf("Both are Equal\n");
    }
   
   getch();
   return 0;
}
