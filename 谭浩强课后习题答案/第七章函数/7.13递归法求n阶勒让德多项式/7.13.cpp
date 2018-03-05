#include<stdio.h>
int main()
{
	double p(int n,int x);
	int n,x;
	scanf("%d %d",&n,&x);
	printf("P%d(%d)=%f\n",n,x,p(n,x));
	return 0;
}

double p(int n,int x)
{
	if(n==0)
	return 1;
	else if(n==1)
		return x;
	else return((2*n-1)*x*p((n-1),x)-(n-1)*p((n-2),x))/n;
}

/*#include <stdio.h>
double p(int n,double x)
{
if(n==0)return 1.0;
else if(n==1)return x;
else return ((2*n-1)*x*p(n-1,x)-(n-1)*p(n-2,x))/n;
}
main()
{
int n,i,k=0;
double x,r;
printf("输入参数：\nx=");
scanf("%lf",&x);
printf("你想输出多少项？\nn=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
r=p(i,x);
printf("%25.0lf",r);
k++;
if(k%3==0)
printf("\n");
}
printf("\n");
}*/
