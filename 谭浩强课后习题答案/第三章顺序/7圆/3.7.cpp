#include<stdio.h>
#define pi 3.1415926
int main()
{
	double r,h,C,S1,S2,V1,V2;
	scanf("r=%lfh=%lf",&r,&h);
	C=2*pi*r;
	S1=pi*r*r;
	S2=4*pi*r*r;
	V1=(4/3)*pi*r*r*r;
	V2=pi*r*r*h;
	printf("圆周长C=%.2f\n",C);
	printf("圆面积S1=%.2f\n",S1);
	printf("圆球表面积S2=%.2f\n",S2);
	printf("圆球体积V1=%.2f\n",V1);
	printf("圆柱体积V2=%.2f\n",V2);
	return 0;
}
