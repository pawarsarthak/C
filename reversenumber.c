#include<stdio.h>
void main()
{
	int n;
	int digit;
	int rev=0;
	int i;
	
	printf("enter number to reverse");
	scanf("%d",&n);
	
	printf("\nbefore reverse: %d\n",n);
	
	while(n>0)
	{
		digit = n%10;
		rev = rev*10+digit;
		n = n/10;
	}
	
	printf("after reverse: %d",rev);
	
	getch();
}
