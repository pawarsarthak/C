#include<stdio.h>
void main()
{
 //defining variables
 int x,pre,post;
 //clearing previous screen
 clrscr();
 // taking a number from user
 printf("ENTER A NUMBER TO DECREMENT");
 scanf("%d",&x);
 // printing number and pre decrement number
 printf("\n ENTERED NUMBER IS %d",x);
 //pre-increment
 pre = --x;
 printf("\n NUMBER AFTER PRE DECREMENT : %d",pre);
 //post-increment
 post = x--;
 printf("\n NUMBER AFTER POST DECREMENT : %d",post);
 //getting characters
 getch();
 }