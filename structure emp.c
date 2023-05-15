#include<stdio.h>
struct employee
{
	int empid;
	char name[50];
	int salary;
}e[5];
void main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter empid");
		scanf("%d",&e[i].empid);
		printf("enter name");
		scanf("%s",&e[i].name);
		printf("enter salary");
		scanf("%d",&e[i].salary);
	}
	for(i=0;i<5;i++)
	{
		printf("emp id: %d\temp name:%d\temp salary:%d",e[i].empid,e[i].name,e[i].salary);
	}
	getch();
}
