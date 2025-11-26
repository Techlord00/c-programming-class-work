#include<stdio.h>
int main()
{
	int a[10][10], b[10][10], x[10][10],i,j,r,c;
	printf("enter number of rows\n");
	scanf("%d",&r);
	printf("enter number of columns\n");
	scanf("%d",&c);
	printf("enter Matrix A elements pressing enter after each row\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
    	}
	}
	printf("now enter Matrix B elements pressing enter after each row\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&b[i][j]);
    	}
	}
// calculating matrix addition
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		x[i][j] = b[i][j] + a[i][j];
    	}
	}
	printf("result matrix is:\n");
	//trying the output
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d\t",x[i][j]);
    	}
    	printf("\n");
	}
	return 0;
}
