#include<stdio.h>
#include<string.h>
int main()
{
	void kong(char a[100]);
	char a[100];
	gets(a);
	kong(a);
	return 0;
}
void kong(char a[100])
{
	int i;
	/*for(i=0;i<4;i++)
	{printf("%c",a[i]);
	if(i<3)
printf(" ");}*/
	for(i=strlen(a);i>0;i--)
	{a[2*i]=a[i];
	a[2*i-1]=' ';}
	puts(a);
}