#include<stdio.h>
int main()
{
	char s[30];
	int i, l=0;
	scanf("%[^\n]", s);
	for (i=0;s[i]!='\0';i++)
	{
		l++;
	}
	printf("this string is %d charecters long\n", l);
return 0;
}
