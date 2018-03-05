#include<stdio.h>
int main()
{
	int m(int a,int b);
	int n(int a,int b);
	int x,y,x1,y1;
	scanf("%d %d",&x,&y);
	x1=m(x,y);
	y1=n(x,y);
	printf("最大公约数是%d\n",x1);
	printf("最小公倍数是%d\n",y1);
	return 0;
}
int m(int a,int b)
{
	int r,t;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return (a);
}
int n(int a,int b)
{
	return ((a*b)/m(a,b));
}
/*int n(int a,int b)
{
	int m1,n1,r,t;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	m1=a;n1=b;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return (m1*n1/a);
}*/



