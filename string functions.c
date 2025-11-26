#include<stdio.h>
#include<string.h>
int main()
{
	char a[10], b[10];
	scanf("%s/n", a);
	scanf("%s/n", b);
	printf("a string length is :%d\n",strlen(a));
	printf("a string uppercase is :%s\n",strupr(a));
	printf("b string lowercase is :%s\n",strlwr(b));
	printf("a string reverse is :%s\n",strrev(a));
	printf("string copy is :%s\n",strcpy(a,b));
	printf("string concat is :%s\n",strcat(a,b));
	printf("a string compare is :%d\n",strcmp(a,b));
	return 0;
}
