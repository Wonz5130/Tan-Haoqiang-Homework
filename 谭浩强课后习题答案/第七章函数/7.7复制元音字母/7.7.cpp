#include<stdio.h>
#include<string.h>
int main()
{
	void copy(char a[100],char b[100]);
	char a[100],b[100];
	gets(a);
	copy(a,b);
	return 0;
}
void copy(char a[100],char b[100])
{
	int i,j;
	for(i=0,j=0;i<strlen(a);i++)
	{if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
	{b[j]=a[i];
	j++;}
	b[j]='\0';}
	puts(b);
}
