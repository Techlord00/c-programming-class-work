#include<stdio.h>
int main()
{
    int i,j,r,sum = 0;
	printf("enter the order of the square matrix\n");
	scanf("%d",&r);
		int a[r][r];
	printf("enter elements of square Matrix A of order %d\n",r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
		scanf("%d",&a[i][j]);
    	}
    }
    //ndopanotanga kuchiCalculatewa trace racho
    for(i=0;i<r;i++)
	{
		sum = sum + a[i][i]
		;
    }
    printf("trace of the square matrix is: %d\n",sum);
	

}
