#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("enter number of values in your array\n");
	scanf("%d",&n);
	printf("enter the %d values of the array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=n-1;i>=0;i--)
	printf("%d\t",a[i]);
	return 0;
}
