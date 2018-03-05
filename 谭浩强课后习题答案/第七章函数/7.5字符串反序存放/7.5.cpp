#include<stdio.h>
#include<string.h>
int main()
{
	void ver(char str[100]);
	char str[100];
	gets(str);
	ver(str);
	puts(str);
	return 0;
}
void ver(char str[100])
{
	char str1[100];
	int i;
	for(i=0;i<strlen(str);i++)
	{ str1[i]=str[strlen(str)-i-1];}
	for(i=0;i<strlen(str);i++)
	{ str[i]=str1[i];}
}
