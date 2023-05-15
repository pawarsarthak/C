#include<stdio.h>
void main()
{
	char s[20];
	int i;
	int temp = 0;
	int len;
	
	printf("enter string");
	scanf("%s",&s);
	
	len = strlen(s);
	
	for (i=0;i<len;i++)
	{
		if(s[i]!=s[len-i-1])
		{
			temp=1;
			break;
		}
	}
	if(temp==1)
	{
		printf("string is not palindrome");
	}
	else
	{
		printf("string is palindrome");
	}
	getch();
}
