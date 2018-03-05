#include<stdio.h>
int main()
{
	void paixu(char str[10]);
	char str[10];
	gets(str);
	paixu(str);
	return 0;
}

void paixu(char str[10])
{
	int i,j,t;
	for(i=0;(i<9)&&(str[i]!='\0');i++)
	{
		for(j=i+1;(j<10)&&(str[j]!='\0');j++)
		{if(str[i]>str[j])
		{t=str[j];
		str[j]=str[i];
		str[i]=t;}
		}
	}
	puts(str);
}