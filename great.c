#include<stdio.h>
void main()
{
	int a;
	int b;
	int c;
	
	printf("enter values of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greatest\n");
		}
		else
		{
			printf("c is greatest\n");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is greatest");
		}
		else
		{
			printf("c is greatest");
		}
	}
	getch();
}
