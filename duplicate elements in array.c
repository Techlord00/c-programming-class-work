#include<stdio.h>
int main()
{
	int a[10],i,n,j;
	printf("enter number of elements in your array\n");
	scanf("%d",&n);
	printf("enter the %d elements of your array\n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	printf("Duplicate Elements In The Array Are\n");
    for(i=0;i<n;i++)
    {
    	for(j=i;j<n;j++)
    	{
    		if(a[i]==a[j])
    		{
    			printf("%d\n",a[i]);
    			break;
			}
		}
	
    }
return 0;
}
