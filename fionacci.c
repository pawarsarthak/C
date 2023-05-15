#include<stdio.h>
void main()
{
	int limit;
	int n1=0;
	int n2=1;
	int n3;
	int i;
	
	printf("enter limit");
	scanf("%d",&limit);
	
	printf("\nfibonacci series:\n");
	printf("%d\t",n1);
	printf("%d\t",n2);
	
	for(i=2;i<limit;i++)
	{
		n3 = n1+n2;
		printf("%d\t",n3);
		n1 = n2;
		n2 = n3;
	}
	getch();
}
