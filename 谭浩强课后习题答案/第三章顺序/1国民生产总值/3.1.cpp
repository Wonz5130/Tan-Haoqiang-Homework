#include<stdio.h>
int main()
{
	double p,r=0.09;
	p=1+r;
	int n=1;
	do
	{
	p=p*(1+r);
	n++;
	}
	while(n<10);
	printf("%f\n",p);
	return 0;
}
