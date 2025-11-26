#include<stdio.h>
int main()
{
	int a[5],key,f=0,i,n;
	printf("enter number of elements in your array");
	scanf("%d",&n);
	printf("enter the %d elements of your array",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	printf("the search key your array");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			f++;
			break;
		}
	}
	if(f==0)
	printf("key not found");
	else
	printf("%d foundat position %d",key,i);
return 0;
}
