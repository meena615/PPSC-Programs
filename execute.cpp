/*evauate the following expression*/
#include<stdio.h>
int main()
{
	int i,j;
	printf("enter the value of i");
	scanf("%d",&i);
	j=(i++)+(++i);
	printf("the value of expression is %d",j);
	
}
