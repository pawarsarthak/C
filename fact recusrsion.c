#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
	int n,f;
	printf("Enter Limit");
	scanf("%d",&n);
	f = fact(n);
	printf("%d ",f);
	getch();
}
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
