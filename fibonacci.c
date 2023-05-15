//#include<stdio.h>
//int fibo(int);
//void main()
//{
//	int n;
//	int f;
//	
//	printf("Enter limit");
//	scanf("%d",&n);
//	
//	f=fibo(n);
//	printf("%d",f);
//	}
//int fibo(int n)
//{
//	if (n==0)
//	{
//		return 0;
//	}
//	else if(n==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return fibo(n-1) + fibo(n-2);
//	}
//}
#include <stdio.h>

int fibo(int);

void main()
{
    int n, f;
    
    printf("Enter limit: ");
    scanf("%d", &n);
    
//    if (n < 0) {
//        printf("Error: Limit cannot be negative.\n");
//        return 1;
//    }
    
    f = fibo(n);
    printf("%d\n", f);
    
    getch();
}

int fibo(int n)
{
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibo(n - 1) + fibo(n - 2);
    }
}
