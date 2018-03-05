#include<stdio.h>
int main()
{
	int i;
	double m=1,n=2,s=0,t;
	s+=n/m;
	for(i=2;i<=20;i++)
	{
		t=m;
		m=n;
		n=t+n;
		s+=n/m;
	}
	printf("%f\n",s);
	return 0;
}

