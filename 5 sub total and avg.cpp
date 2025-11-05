/*write a c programme for taking 5 subjects in integers and 
finding the total integer and avg in float*/
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,t,a;
	float average;
	printf("enter marks of 5 subjects");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	t=s1+s2+s3+s4+s5;
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	a=t/5.0;
	printf("total is %d\n",t);
	printf("average is %f\n",a);
	return 0;
}

