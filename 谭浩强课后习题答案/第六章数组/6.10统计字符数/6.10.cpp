#include<stdio.h>
int main()
{
	char a[3][80];
	int i,j,m=0,n=0,x=0,y=0,z=0;
	for(i=0;i<3;i++)
	{
		gets(a[i]);
		for(j=0;j<80&&a[i][j]!='\0';j++)
		{if(a[i][j]>='A'&&a[i][j]<='Z')
		 m++;
		else if(a[i][j]>='a'&&a[i][j]<='z')
			n++;
		else if(a[i][j]>='0'&&a[i][j]<='9')
			x++;
		else if(a[i][j]==' ')
			y++;
		else z++;
		}
	}
	printf("大写字母有%d个\n",m);
	printf("小写字母有%d个\n",n);
	printf("数字有%d个\n",x);
	printf("空格有%d个\n",y);
	printf("其他字符有%d个\n",z);
	return 0;
}