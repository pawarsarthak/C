#include<stdio.h>
#include<conio.h>
struct student
{			
char name[20];
char div[20];
int marks;
}s[3]; //s1,s2,s3
	
void main()
{
//	struct student
//	{			
//	char name[20];
//	char div[20];
//		int marks;
//	}s[i]; //s1,s2,s3
		
	int i;
//	struct student s1 = {"abc","fyco1",121};
//	struct student s2 = {"abbc","fyco2",1221};
//	struct student s3 = {"abbbc","fyco3",12221};
//	printf("\nName: %s \n Division: %s \n Marks: %d",s1.name,s2.div,s3.marks);
	for(i=0;i<3;i++)
		{
		printf("\n\nenter name:");
		scanf("%s",&s[i].name);
		printf("\nenter division:");
		scanf("%s",&s[i].div);
		printf("\nenter marks:");
		scanf("%d",&s[i].marks);
	}
			
//		printf("\n\nname:",s[i].name);
//		printf("\ndivision:",s[i].div);
//		printf("\nmarks:",s[i].marks);
	
	for(i=0;i<3;i++)
	{
	printf("\nName: %s \n Division: %s \n Marks: %d",s[i].name,s[i].div,s[i].marks);
	}
	getch();
}

