#include<stdio.h>
int main()
{
	char a[30];
	int i, v=0,c=0,s=0,d=0;
	scanf("%[^\n]", a);
	for (i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		v++;
		else if(a[i]==' ')
		s++;
		else if(a[i]<='9'&&a[i]>='0')
		d++;
		else 
		c++;
	}
	printf("vowels are %d\n", v);
	printf("consonants are %d\n", c);
	printf("digits are %d\n", d);
	printf("spaces are %d\n", s);
return 0;
}
