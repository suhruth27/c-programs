//student structure
#include<stdio.h>
#include<conio.h>
main()
{
	struct student
	{
		int rno;
		char name[100];
		float fee;
		char course[200];
	}s1;
	printf("Enter roll number of student : ");
	scanf("%d",&s1.rno);
	printf("Enter name of student : ");
	scanf("%s",s1.name);
	printf("Enter fee of student : ");
	scanf("%f",&s1.fee);
	printf("Enter course of student : ");
	scanf("%s",s1.course);
	
	printf("roll number of student : %d\n",s1.rno);
	printf("name of student : %s\n",s1.name);
	printf("fee of student : %f\n",s1.fee);
	printf("course of student : %s\n",s1.course);
	getch();
}
