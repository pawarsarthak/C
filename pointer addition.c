#include<stdio.h>
void main()
{
	int a=20;
	int *p = &a;
	printf("adress of pointer before addition: %u",p);
	p=p+5;
	printf("\naddress of pointer after: %u",p);
	getch();
}
