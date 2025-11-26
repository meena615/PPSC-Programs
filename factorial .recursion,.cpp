/*write a c program to find factorial of a given number using recursion*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any +ve integer number");
	scanf("%d",&n);
	
	printf("factorial is %d",fact(n));
}
int fact(int x)
{
	if(x == 1)
	  return x;
	else
	  return x*fact(x-1);
}
