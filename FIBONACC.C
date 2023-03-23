#include<stdio.h>
void main()
{
 int a=0,b=1,sum,limit,i;
 clrscr();
 //Getitng limit from user
 printf("Enter Limit for Fibonacci Series");
 scanf("%d",&limit);
 // FB Series

 // Printing first 2 numbers
 printf("%d\t",a);
 printf("%d\t",b);
 // remaining numbers
 for(i=3;i<=limit;i++)      // first 2 number is printed therefore i=3
 {
  sum = a+b;
  // Printing Sum
  printf("%d\t",sum);
  a = b;
  b = sum;
 }
 getch();
}
