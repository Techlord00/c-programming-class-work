#include<stdio.h>
int main()
{
	int a[10][10], b[10][10], x[10][10],i,j,r,c;
	pirntf("enter number of rows\n");
	scanf("%d",&r);
	pirntf("enter number of columns\n");
	scanf("%d",&c);
	pirntf("enter Matrix A elements pressing enter after each row\n");
	for(i=0;i<r;i++)
	{
		for(i<=0;i<c;i++)
		{
		scanf("%d",&a[i][j]);
    	}
	}
	pirntf("now enter Matrix B elements pressing enter after each row\n");
	for(i=0;i<r;i++)
	{
		for(i<=0;i<c;i++)
		{
		scanf("%d",&b[i][j]);
    	}
	}
// calculating matrix addition
    for(i=0;i<r;i++)
	{
		for(i<=0;i<c;i++)
		{
		x[i][j] = b[i][j] + a[i][j];
    	}
	}
	//trying the output
		for(i=0;i<r;i++)
	{
		for(i<=0;i<c;i++)
		{
		printf("%d\t",x[i][j]);
    	}
	}
	return 0;
}
