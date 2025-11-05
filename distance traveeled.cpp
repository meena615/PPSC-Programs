/*Write a c program to calculate distance travelled by an object*/
#include<stdio.h>
int main()
{
	float d,a,t,u;
	printf("enter accerlation");
	scanf("%f",&a);
	
	printf("\n enter time");
	scanf("%f",&t);
	
	printf("\n enter initial velocity");
	scanf("%f",&u);
	
	d=(u*t)+(a*t*t)/2;
	
	printf("\n the distance travelled by an object is %f",d);
}
