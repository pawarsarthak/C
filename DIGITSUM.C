#include<stdio.h>
void main()
{
 int num,dig,sum=0,n,i;
 clrscr();
 // Getting Number from user
 printf("Enter A Number");
 scanf("%d",&num);
 //storing orignal number
 n = num;
 // Using for loop to iterate with i
 for(i=0;num>0;i++)
 {
  // Getting Digit with %10
  dig = num % 10;
  // Adding tha digit in Sum Assignment operator
  sum += dig;
  // Removing That digit from orignal number
  num = num / 10;
 }
 // printing Addition of That interger Number's Digits
 printf("Sum of All Digits of %d is %d",n,sum);
 getch();
}