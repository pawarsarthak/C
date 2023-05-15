#include<stdio.h>
int fact(int);
void main()
{
	int n,f;
	printf("Enter Number :");
	scanf("%d",&n);
	f=fact(n);
	printf("%d",f);	
}
int fact(int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
	getch();
}
