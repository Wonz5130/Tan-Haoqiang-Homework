#include<stdio.h>
int main()
{
	char s1[80],s2[80];
	int i,m=0;
	/*gets(s1);*/
	gets(s2);
	for(i=0;s2[i]!=' ';i++)
	{
	/*if(s2[i]=='\0')
	break;*/
	s1[i]=s2[i];}
	s2[i]='\0';
	puts(s2);
	return 0;
}