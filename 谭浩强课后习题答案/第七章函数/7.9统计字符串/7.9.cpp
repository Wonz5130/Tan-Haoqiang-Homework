#include<stdio.h>
int m,x,y,z;
int main()
{
	void tj(char str[100]);
	char str[100];
	gets(str);
	m=x=y=z=0;
	tj(str);
	printf("字母有%d个\n",m);
	printf("数字有%d个\n",x);
	printf("空格有%d个\n",y);
	printf("其他字符有%d个\n",z);
	return 0;
}
void tj(char str[100])
{
	int i;
	for(i=0;i<80&&str[i]!='\0';i++)
		{
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
			m++;
		else if(str[i]>='0'&&str[i]<='9')
			x++;
		else if(str[i]==' ')
			y++;
		else z++;
		}
}