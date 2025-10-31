#include<stdio.h>
int main()
{
	int a[10],n,i,pos,new;
	printf("enter number of elements in array\n");
	scanf("%d",&n);
	printf("enter %d elements in array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the position in array you want to edit\n");
	scanf("%d",&pos);
	printf("enter the new value to put in position %d\n",pos);
	scanf("%d",&new);
    a[pos]=new;
   	printf("the new and updated array is \n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
return 0;
}
