#include<stdio.h>
int main()
{
	int a,b,c,t;
	int *p;
	scanf("%d%d%d",&a,&b,&c);
	p=&a;
	if(a>b)
	{t=*p;
	*p=b;
	b=t;}
	if(*p>c)
	{t=*p;
	*p=c;
	c=t;}
	p=&b;
	if(*p>c)
	{t=*p;
	*p=c;
	c=t;}
	printf("%d %d %d\n",a,b,c);
	return 0;
}