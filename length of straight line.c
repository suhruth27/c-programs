//length of st.line
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(void)
{
	int x1, y1, x2, y2;
	float line_length;
    printf("\n\n Enter   x-co-ordinate of first point: ");
    scanf("%d", &x1);
    
    printf("\n Enter   y-co-ordinate of first point: ");
    scanf("%d", &y1);
    
    printf("\n\n Enter x-co-ordinate of second point: ");
	scanf("%d", &x2);

	printf("\n Enter y-co-ordinate of second point: ");
    scanf("%d", &y2);

    line_length = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));   
    printf("\n The length of the straight line joining the two points is %f", line_length);

	getch();
    return 0;
}
