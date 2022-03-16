//distance between points structure
#include<stdio.h>
#include<math.h>
main()
{
	struct points
	{
		int x,y;
	}p1,p2;
	printf("Enter x1 : ");
	scanf("%d",&p1.x);
	printf("Enter x2 : ");
	scanf("%d",&p2.x);
	printf("Enter y1 : ");
	scanf("%d",&p1.y);
	printf("Enter y2 : ");
	scanf("%d",&p2.y);
	int d= sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
	printf("distance b/w the points is : %d",d);
}
