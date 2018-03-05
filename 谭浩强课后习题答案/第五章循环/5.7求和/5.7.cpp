#include<stdio.h>
int main()
{
	double s=0,i;
	for(i=1;i<=100;i++)
		s+=i;
	for(i=1;i<=50;i++)
		s+=i*i;
	for(i=1;i<=10;i++)
		s+=1/i;
	printf("%15.6f\n",s);
	return 0;
}