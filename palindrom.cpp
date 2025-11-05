/*write a c program to print whether the given number is palindrom or not*/
#include<stdio.h>
int main()
{
	int num,rev=0,rem,temp;
	printf("enter any positive integer number");
	scanf("%d",&num);
	temp=num;
	while(num !=0)
	{
		rem=num % 10;
		rev=rev * 10 + rem;
		num=num/10;
	}
	if(temp==rev)
	   printf("the given number is palindrom %d",temp);
	else
	   printf("the given number is not palindrom %d",temp);
}
