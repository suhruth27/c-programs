//largest among 3 using conditional operator 9-12-21
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c;  
    printf("Please Enter three different values\n");  
    scanf("%d %d %d", &a, &b, &c);  
    
    if(a >= b && a>=c) 
    {
        printf("%d is Largest\n", a);          
    } 
    else if (b >= a && b>=c)
    { 
        printf("%d is Largest\n", b);  
    } 
    else if (c >= a && c>=b)
    { 
        printf("%d is Largest\n", c);  
    } 
    else 
    {
	printf("All are Equal\n");
    }
   
   getch();
   return 0;
}
