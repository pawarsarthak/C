#include<stdio.h>
void main()
{
 int i,j,n;
 clrscr();
 printf("Enter A number");
 scanf("%d",&n);

 printf("Multiplication table from 1 to %d\n",n);
 for(j=1;j<=n;j++)
 {
  for(i=1;i<=10;i++)
  {
    printf("%d X %d = %d\n",j,i,j*i);
  }
   printf("\n");
  }
  getch();
 }

