#include<stdio.h>
int main()
{
	char a[80],b[80];
	int i,j;
	gets(a);
	gets(b);
	i=j=0;
	while (a[i]!='\0')
	{i++;}
	while(b[j]!='\0')
	{a[i++]=b[j++];}
	a[i]='\0';
	puts(a);
	return 0;
}
