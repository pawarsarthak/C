#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[20];
}s;
void main()
{
	s root={20,"sarthak"};
	printf("%d",root.rollno);
	getch();
}
