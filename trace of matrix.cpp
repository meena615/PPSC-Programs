/* write a c program to find the trace of a matrix*/
#include<stdio.h>
int main()
{
	int mat[3][3],i,j,sum=0;
	printf("Enter the elements of matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3; j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		sum =  sum + mat[i][j];
	}
    printf("\n the trace of the given matrix is %d");

}
