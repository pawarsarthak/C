#include<stdio.h>
void main()
{
	int a=20;
	int *p=&a;
	printf("address before: %u",p);
	p=p-5;
	printf("\naddress after: %u",p);
	getch();
}
