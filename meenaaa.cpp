#include<stdio.h>
int main()
{
	int a=7,b=18;
	printf("before swapping a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a=%d,b=%d\n",a,b);
	return 0;
}
