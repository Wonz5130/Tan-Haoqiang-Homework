#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int zhuan(char str[100],char str1[100]);
	char str[100],str1[100];
	gets(str);
	printf("%s--%d\n",str,zhuan(str,str1));
	return 0;
}

int zhuan(char str[100],char str1[100])
{
	int length,x=0,i;
	length=strlen(str);
	for(i=0;i<length;i++)
	{/*if(str[i]=='A')
	str1=10;
	else if(str[i]=='B')
	str1=11;
	else if(str[i]=='C')
	str1=12;
	else if(str[i]=='D')
	str1=13;
	else if(str[i]=='E')
	str1=14;
	else if(str[i]=='F')
	str1=15;
	else {str1=str[i];}*/

		if(str[i]>='A'&&str[i]<='Z')
			str1[i]=int(str[i]-'A')+10+'0';
	x+=(str1[i]-'0')*(pow(16,length-i-1));}
		return x;
}
