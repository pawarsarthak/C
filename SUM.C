#include<stdio.h>
void main()
{
 // Defining variables
 int a,b,sum;
 //printing msg for taking 2 numbers as input
 printf("Enter 2 Numbers");
 //Getting numbers by scanf
 scanf("%d%d",&a,&b); //format specifier, address locator
 // adding 2 numbers
 sum = a + b;
 // printing result
 printf("sum of a=%d b=%d is \n sum=%d",a,b,sum);
 getch();
 clrscr();
}