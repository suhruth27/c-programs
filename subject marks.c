//subject marks
#include<stdio.h>
#include<conio.h>
int main()
{
    int subject1, subject2, subject3, subject4, subject5, subject6; 
    float Total, Average, Percentage;

    printf("Please Enter the marks of six subjects: \n");
    scanf("%d%d%d%d%d%d", &subject1, &subject2, &subject3, &subject4, &subject5, &subject6);

    Total = subject1 + subject2 + subject3 + subject4 + subject5 + subject6;
    Average = Total / 6;
    Percentage = (Total / 600) * 100;

    printf("Total Marks = %.2f\n", Total);
    printf("Average Marks = %.2f\n", Average);
    printf("Marks Percentage = %.2f", Percentage);
	getch();
    return 0;
}
