/*write a c program to find factorial of a given number using recursion*/
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter any positive integer number");
	scanf("%d",&n);
	
	printf("Factorial is %d",fact(n));
	
}
int fact(int x)
{
	if(x == 1)
	  return x;
	else
	  return x*fact(x-1);
}
