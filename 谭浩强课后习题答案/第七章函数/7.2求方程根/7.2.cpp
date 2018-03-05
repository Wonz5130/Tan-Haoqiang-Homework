#include<stdio.h>
#include<math.h>
int main()
{
	void jie1(double,double,double);
	void jie2(double,double,double);
	void jie3(double,double,double);
	double a,b,c,m;
	scanf("%lf %lf %lf",&a,&b,&c);
	m=b*b-4*a*c;
	if(m>0)
	    jie1(a,b,m);
	else if(m==0)
		jie2(a,b,m);
	else jie3(a,b,m);
	return 0;
}
void jie1(double a,double b,double m)
{ double x1,x2;
x1=((-b)+sqrt(m))/(2*a);
x2=((-b)-sqrt(m))/(2*a);
printf("该方程组解为x1=%f\n",x1);
printf("该方程组解为x2=%f\n",x2);}
void jie2(double a,double b,double m)
{ double x;
x=(-b)/(2*a);
	printf("该方程组解为x1=x2=%f\n",x);}
void jie3(double a,double b,double m)
{double x,y;
x=(-b)/(2*a);
y=sqrt(-m)/(2*a);
printf("该方程组解为x1=%f+%fi\n",x,y);
printf("该方程组解为x2=%f-%fi\n",x,y);}
