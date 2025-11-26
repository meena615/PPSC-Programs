/*write a c program to find lcm by using recursion*/
#include<stdio.h>
int lcm(int,int);
int main()
{
	int n1,n2,result;
	printf("Enter any two integer numbers ");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
	    result=lcm(n2,n1);
	else
	    result=lcm(n1,n2);
	printf("\nLCM is %d",result);
}
int lcm(int a,int b)
{
	static int temp=0;
	temp=temp+b;    //may be largest value be the lcm so they took this logic//
	if(temp%a==0 && temp%b==0)
	    return temp;
	else
	    return lcm(a,b);
	    
}
