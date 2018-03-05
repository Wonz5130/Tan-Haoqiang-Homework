/*#include<stdio.h>
#include<string.h>
int main()
{
	void longest(char str[100]);
	char str[100];
	gets(str);
	longest(str);
	return 0;
}
void longest(char str[100])
{
	int i,m,n,flag;
	m=n=flag=0;
	for(i=0;i<strlen(str);i++)
	{ if(str[i]!='\0')
	{m++;}
	else if(m>n)
	{n=m;}
	m=0;
	}
	for(i=0;i<n;i++)
	{printf("%c",str[i]);}
}*/


#include <stdio.h>
#include <string.h>
int main()
{
	int word(char c);
    int longest(char str[]);
    int i;
    char str[80];
    printf("输入一行字符串\n\n");
    gets(str);
    printf("\n\n最长的单词为：\n\n");
    for(i=longest(str);word(str[i]);i++)
    printf("%c",str[i]);
    printf("\n");
    return 0;
}

//用于判断字符是否是英文字节
int word(char c)
{
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) return 1;
    else return 0;
}

int longest(char str[]) 
{
	int i,flag=1,len=0,point,max_len=0,max_point;
    //遍历字符
    for(i=0;i<=strlen(str);i++)
	{
     //判断是否为英文
     if(word(str[i])) 
	 {
		 if(flag==1) 
		 {
         //单词第一个找到后改变标志
         point=i; 
         flag=0;
		 }
       else len++; //开始对这个单词长度进行累加
	 }
	 else //非英文字母
	 {
//等待第一个英文字母的出现，所以flag=1（要是下一个是英文字母的话就能执行上面的if）
		 flag=1; 
//之前累加的单词长度是否比上一个单词更长（第一次的话max_len初始化为0，len必大于max_len）
		 if(len>max_len)
		 {
//将单词长度保存下来
			 max_len=len;
//将最长单词的第一个英文字母在字符串中的位置保存下来
			 max_point=point;
		 }
		 len=0;
	 }
	}
	return (max_point);
}
