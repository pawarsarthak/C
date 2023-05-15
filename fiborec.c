#include<stdio.h>
int fibo(int);
void main()
{
	int n=5;
	int f,i;
	for(i=0;i<n;i++)
	{
		f = fibo(i);
		printf("%d\t",f);
	}
	
	getch();
}
int fibo(int i)
{
	if(i==0)
	{
		return 0;
	}
	else if(i==1)
	{
		return 1;
	}
	else
	{
		return fibo(i-1) + fibo(i-2);
	}
}
