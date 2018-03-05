#include<stdio.h>
#include<math.h>
int main()
{
	double a,x,y;
	scanf("%lf",&a);
	x=a/2;
	y=(x+a/x)/2;
	/*if(fabs(x-y)>=1e-5)
	{
		x=y;
		y=(x+a/x)/2;
	}*/
	do
	{
		x=y;
		y=(x+a/x)/2;
	}
	while(fabs(x-y)>=1e-5);
	printf("%f  %f\n",a,y);
	return 0;
}
