#include<stdio.h>
#include<math.h>
void main()

{
	// defining req variables
	int num,choice,    sin,cos,tan,cot,sec,cosec;
	clrscr();
	// ,sinin,cosin,tanin,cotin,secin,cosecin
	// getting nuber from input
	printf("ENTER A NUMBER");
	scanf("%d",&num);
	
		//getting user choice
	printf("TYPE sin FOR SIN \n cos FOR COS \n tan FOR TAN \n cot FOR COT \n sec FOR SEC \n cosec FOR COSEC \n ");
	scanf("%d",&choice);
	
	//assigning sin cos tan
	sin = sin(num);
	cos = cos(num);
	tan = tan(num);
	
	//using switchcase to choice
	switch(choice)
	{
		case 1 : sin  = sin(num);
			     printf("\n SIN OF %d IS %d",num,sin);
			     break;
		case 2 : cos  = cos(num);
				 printf("\n COS OF %d IS %d",num,cos);
				 break;
		case 3 : tan = tan(num);
				 printf("\n TAN OF %d is %d",num,tan);
				 break;
		case 4 : cot  = cot(1/num)
				 printf("\n COT OF %d IS %d",num,cot);
		case 5 : sec = sec(1/num);
				 printf("\n SEC OF %d IS %d",num,sec);
				 break;
		case 6 : cosec = cosec(1/num);
				 printf("\n COSEC OF %d IS %d",num,cosec);
				 break;
		
	}
	getch();
}
