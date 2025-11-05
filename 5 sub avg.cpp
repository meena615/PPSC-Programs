/*write a c program to find avg of 5 subjects marks*/
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	float avg;
	printf("enter 5 sub marks"); 
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	avg=(m1+m2+m3+m4+m5)/5.0;
	printf("\nThe average is %f",avg);
}
