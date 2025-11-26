/*write a c program to find fibonacci series using recursion*/
#include<stdio.h>
int fib(int);
int main()
{
	int n;
	printf("Enter any positive integer number");
	scanf("%d",&n);
	printf("\nFibanocci series is ");
	for(i=0;i<n;i++)
	    printf("%d ",fib(i));
}
int fib(int x)
{
	if(x == 0 || x == 1)
	   return x;
	else
	   return fib(x-1)+fib(x-2)
}
