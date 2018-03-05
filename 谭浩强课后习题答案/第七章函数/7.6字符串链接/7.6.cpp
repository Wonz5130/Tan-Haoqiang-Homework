#include<stdio.h>
int main()
{
	void lianjie(char a[80],char b[80]);
	char a[80],b[80];
	gets(a);
	gets(b);
	lianjie(a,b);
	return 0;
}
void lianjie(char a[80],char b[80])
{
	int i,j;
	i=j=0;
	while (a[i]!='\0')
	{i++;}
	while(b[j]!='\0')
	{a[i++]=b[j++];}
	a[i]='\0';
	puts(a);
}