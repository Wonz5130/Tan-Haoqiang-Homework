#include<stdio.h>
int main()
{
	int i,j,n=20;
    double Sn=0,x;
	for(i=1;i<=20;i++)
	{
		x=1;
		for(j=n+1-i;j>=1;j--)
		{
			x=x*j;
		}
		Sn=x+Sn;
	}
	/*for(i=1;i<=20;i++)
	{
		x=x*i;
		Sn=Sn+x;
	}*/
	printf("%22.15e\n",Sn);
	return 0;
}