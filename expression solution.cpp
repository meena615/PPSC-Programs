/*Write a c program to evaluate the following expression*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("\n enter the value of b");
	scanf("%d",&b);
	printf("\n enter value of c");
	scanf("%d",&c);
	printf("\n enter the value of d");
	scanf("%d",&d);
	e=a/b*c-b+a*d/3.0;
	printf("\nthe value of expression is %d",e); 
	
}
