/*write a c program to perform multiplication of two matrices*/
#include<stdio.h>
int main()
{

	int a[10][10],b[10][10],c[10]1[10],i,j,k,r1,r2,c1,c2;
	printf("\n Enter the size of matrix A");
	scanf("%d%d",&r1,&c1);
	
	printf("\n Enter the size of matrix B");
	scanf("%d%d",&r2,&c2);
	
	printf(" \n Enter the elements in matrix A");
    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter the elements in matrix B");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	if(r2!=c1)
	{
		print("Matrix multiplication is not possible....");
	}
	else
	{
	    printf("\n the result of matrix C");
	    for(i=0;i<r1;i++)
	    {
	        for(j=0;j<c2;j++)
		
            c[i][j]=0;
            for(k=0;k<2;k++)
            {
            	c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
			printf("%d  ",c[i][j]);
	    }
	    printf("\n");
	}
}
