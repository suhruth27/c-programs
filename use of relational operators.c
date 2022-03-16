//use of relational operators 8-12-21
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("enter x value");
	scanf("%d", &x);
	printf("enter y value");
	scanf("%d", &y);
	// Is x is greater than y?
    printf("x > y : %d\n", x > y);

    // Is x is greater than or equal to y?
    printf("x >= y : %d\n", x >= y);

    // Is x is smaller than y?
    printf("x < y : %d\n", x < y);

    // Is x is smaller than or equal to y?
    printf("x <= y : %d\n", x <= y);

    // Is x is equal to y?
    printf("x == y : %d\n", x == y);

    // Is x is not equal to y?
    printf("x != y : %d\n", x != y);
    getch();
    return 0;
}
