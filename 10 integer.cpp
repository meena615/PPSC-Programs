/*write a c program to search a element using linear search*/
#include<stdio.h>
int main()
{
	int a[10],i,target,found=0;
	printf("enter any 10 integer elements");
	for(i=0;i<10;i++)
	    scanf("%d",&a[i]);
    printf("\n enter an element to be searched");
        scanf("%d",&target);
    for(i=0;i<10;i++)
    {
    	if(target == a[i])
    	{
    	    found=1;
    	    break;
		}
	}
	if(found==1)
	printf("element %d is found",target);
	printf("elem")
}
