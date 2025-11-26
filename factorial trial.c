#include<stdio.h>
void factorial(int n)
{
	int factorial;
	if(n==0&&n==1)
	{
		factorial=1;
	}
	else
	{
		factorial*=1;
		
	}
}
int main()
{
	int number,i,n;
	printf("ENTER THE NUMBER AND PRESS ENTER");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		printf("THE FACTORIAL IS %d",factorial(n));
	}
	return 0;
}
