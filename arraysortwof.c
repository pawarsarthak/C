#include<stdio.h>
void main()
{	//ascdending
	int unsortarr[5];
	int i;
	int j;
	int temp;
	
	printf("enter array to sort\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&unsortarr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(unsortarr[j]<unsortarr[j+1])
			{
				temp= unsortarr[j];
				unsortarr[j]=unsortarr[j+1];
				unsortarr[j+1]=temp;
			}
		}
	}
	
	printf("sorted array (asc):\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",unsortarr[i]);
	}
	getch();
}
