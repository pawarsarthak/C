#include<stdio.h>
void main()
{
	int num;
	int i;
	int temp=0;
	
	printf("enter number to determine number is prime or not: ");
	scanf("%d",&num);
	
	for(i=2;i<=num-1;i++)
	{
		if(num%i==0)
		{
			temp=1;
			break;
		}
	}
	if(temp=1)
	{
		printf("number is composite");
	}
	else
	{
		printf("number is prime");
	}
	getch();
}
