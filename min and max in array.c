#include<stdio.h>
int main()
{
	int a[10],n,i,min,max;
	printf("enter number of elements in array\n");
	scanf("%d",&n);
	printf("enter %d elements in array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]>max)
		min=a[i];
	}
	printf("min=%d, max=%d",min,max);
	return 0;
}
