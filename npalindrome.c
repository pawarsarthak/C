#include<stdio.h>
void main()
{
	int n,num;
	int digit;
	int rev=0;
	int i;
	
	printf("enter a number");
	scanf("%d",&n);
	
	num = n;
	
	while(n>0)
	{
		digit = n%10;
		rev = rev*10 + digit;
		n = n/10;
	}
	
//	printf("%d",rev);
	
	if(rev==num)
	{
		printf("number is palindrome");
	}
	else{
		printf("number is not palindrome");
	}
	
	getch();
}
