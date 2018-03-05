#include<stdio.h>
#include<math.h>
int main()
{
	double x1,x2,x0;
	do
	{
		scanf("%lf%lf",&x1,&x2);
	}
	while((2*x1*x1*x1-4*x1*x1+3*x1-6)*(2*x2*x2*x2-4*x2*x2+3*x2-6)>=0);
	do
	{
		x0=(x1+x2)/2;
		if((2*x0*x0*x0-4*x0*x0+3*x0-6)*(2*x1*x1*x1-4*x1*x1+3*x1-6)<0)
		x2=x0;
		else
			x1=x0;
	}
	while(fabs(2*x0*x0*x0-4*x0*x0+3*x0-6)>=1e-5);
		printf("x=%6.2f  \n",x0);
	return 0;
}

