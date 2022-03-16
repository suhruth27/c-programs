//reverse order funtions
#include<stdio.h>
int Reverse(int n)
{
   int sum=0;
   while (n!=0)
   {
     sum = sum*10 + n%10;
     n /= 10;
   }
   return sum;
}

int main()
{
   int number, rev;

   printf("Enter a positive interger: ");
   scanf("%d", &number);

   rev = Reverse(number);

   printf("The reverse of %d is: %d", number, rev);

   return 0;
}
