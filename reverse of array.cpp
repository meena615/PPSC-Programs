/*write a c program to print the reverse of the given array*/
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter any 5 elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		printf("%d  ",a[i]);
    }
    for(i=4;i>=0;i--)
    {
    	printf("%d",a[i]);
	}
    printf("\n The reverse of the array is %d",a[i]);	
}
