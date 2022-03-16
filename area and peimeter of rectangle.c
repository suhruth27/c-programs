#include<stdio.h>
#include<conio.h>
 
int main() 
{
   int length, breadth, area, perimeter;
 
   printf("\nEnter the Length of Rectangle : ");
   scanf("%d", &length);
 
   printf("\nEnter the Breadth of Rectangle : ");
   scanf("%d", &breadth);
 
   area = length * breadth;
   printf("\nArea of Rectangle : %d\n", area);
   
   perimeter = 2 * (length + breadth);
   printf("\nperimeter of Rectangle : %d", perimeter);
   getch();
   return (0);
}
