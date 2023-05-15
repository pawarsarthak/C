#include<stdio.h>
void main()
{
	int a= 2;
	int *p=&a;
	printf("address before : %p",p);
	p = p+1;
	printf("\naddress after : %p",p);
	getch();
}
