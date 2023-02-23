#include<stdio.h>
void main()
{
 //defining variables
 int num,pre,post;
 //clearing previous screen
 clrscr();
 // taking a number from user
 printf("ENTER A NUMBER TO INCREMENT");
 scanf("%d",&num);
 // printing number and pre increment number
 printf("\n ENTERED NUMBER IS %d",num);
 //pre-increment
 pre = ++num;
 printf("\n NUMBER AFTER PRE INCREMENT : %d",pre);
 //printing orignal number and number after post incremnt

 // printf("\n ORIGNAL NUMBER IS %d",num);

 //post-increment
 post = num++;
 printf("\n NUMBER AFTER POST INCREMENT : %d",post);
 //getting characters
 getch();
}