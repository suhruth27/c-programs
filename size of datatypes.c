#include<stdio.h>
#include<limits.h>
#include<conio.h>
int main(void)
{
	printf("storage size of int is: %d\n", sizeof(int));
	printf("storage size of char is: %d\n", sizeof(char));
	printf("storage size of unsigned is: %d\n", sizeof(unsigned));
	printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
	getch();
	
}

