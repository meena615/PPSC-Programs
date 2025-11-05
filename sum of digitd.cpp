/*write a c program to print the sum of digits of the given number*/
#include<stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("enter any positive integer number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("the sum digits of the given number is %d",sum);
}
