#include<stdio.h>
int main()
{
	int a[10],j,i,n,min,temp;
	printf("enter number of elements in your array\n");
	scanf("%d",&n);
	printf("enter the %d elements of your array\n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp; 
	}
	printf("the soted array is\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
return 0;
}
