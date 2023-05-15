#include<stdio.h>
int fact(int);
void main()
{
	int n,f;
	f = fact(n);
	printf("Enter Limit");
	scanf("%d",&f);
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
