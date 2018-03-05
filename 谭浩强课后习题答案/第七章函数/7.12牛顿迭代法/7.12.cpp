#include<stdio.h>
#include<math.h>
int main()
{
	double niuton(double a,double b,double c,double d);
	double a,b,c,d;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	printf("x=%f\n",niuton(a,b,c,d));
	return 0;
}

double niuton(double a,double b,double c,double d)
{
	double x0,x1,f,f1;
	x1=1;
	do
	{
		x0=x1;   //x0：上一次求出的近似根
		f=a*x0*x0*x0+b*x0*x0+c*x0+d;
		f1=3*a*x0*x0+2*b*x0+c;
		x1=x0-f/f1;   //牛顿迭代法公式
	}
	while(fabs(x0-x1)>=1e-5);
	return(x1);
}