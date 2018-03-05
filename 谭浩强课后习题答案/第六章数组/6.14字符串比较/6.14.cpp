#include<stdio.h>
int main()
{
	char s1[80],s2[80];
	int i,m=0;
	gets(s1);
	gets(s2);
	i=0;
	for(i=0;m==0;i++)
	{	
		if (s1[i]>s2[i])
	{m=s1[i]-s2[i];}
	else 
	{m=-(s2[i]-s1[i]);}
	}
	printf("%d\n",m);
	return 0;
}