#include<stdio.h>
void main()
{
 // initializing 3 variables
 int a,b,temp;
 // clearing output screen
 clrscr();
 // printing msg to user
 printf("Enter 2 numbers for swapping");
 // taking 2 numbers from user
 scanf("%d%d",&a,&b);
 // printing numbers before swapping
 printf("Before Swapping Numbers : a = %d, b = %d",a,b);
 // swapping numbers
 temp = a;
 a = b;
 b = temp;
 //printing numbers after swapping
 printf("\n After swapping : a = %d , b = %d",a,b);
 // getting output for unlimited duration
 getch();
}