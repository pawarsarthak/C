#include<stdio.h>
void main()
{
 int i,j,n,k=1;
 clrscr();
 //Setting up limit
 printf("Enter A Limit Of Triangle: ");
 scanf("%d",&n);
 //triangle
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("%d\t",k);
   k++ ;
  }
  printf("\n");
 }
 getch();
}