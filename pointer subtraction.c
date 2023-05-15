#include<stdio.h>
void main()
{
	int a= 20;
	int *p= &a;
	printf(" address of pointer before: %u",p);
	p=p-5;
	printf(" \n address of pointer after subtraction: %u",p);
	getch();
}
