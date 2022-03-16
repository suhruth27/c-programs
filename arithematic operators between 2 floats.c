//arithematic operators b/w 2 floats
#include<stdio.h>
#include<conio.h>
int main()
{
	float p, q;
    float sum, sub, mul, mod;
    float div;

    // it will take two integer numbers
    printf("Enter any two positive integer numbers:\n");
    scanf("%f%f", &p, &q);

    // It will perform all arithmetic operations
    sum = p + q;
    sub = p - q;
    mul = p * q;
    div = (float)p / q;
    mod = p % q;

    // It will print the final output of the program
    printf("\n");
    printf("Addition of       %f + %f = %f\n", p, q, sum);
    printf("Subtraction of    %f - %f = %f\n", p, q, sub);
    printf("Multiplication of %f * %f = %f\n", p, q, mul);
    printf("Division of       %f / %f = %f\n", p, q, div);
    printf("Modulus of        %f %% %f = %f\n", p, q, mod);
	
	getch();
    return 0;

}
