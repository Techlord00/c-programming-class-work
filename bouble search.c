#include<stdio.h>#include<stdio.h>
int main()
{
	int a[10],key,mid,low,high,i,n,f=0;
	Printf("enter number of elements in your array");
	scanf("%d",&n);
	Printf("enter the %d elements of your array",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	printf("the search key your array");
	scanf("%d",&key);
	low=0,high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			f++;
			printf("%d found at position %d", key,mid);
			break;
		}
		else if(key<a[mid])
		high=mid-1;
		else if(key>a[mid])
		low=mid+1;
	}
	if(!f)
	printf("%d is not found",key);
return 0;
}
