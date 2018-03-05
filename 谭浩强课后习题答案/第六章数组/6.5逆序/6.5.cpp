#include<stdio.h>
int main()
{
	int a[5]={8,6,5,4,1},i,t;
	for(i=0;i<5/2;i++)
	{
		t=a[i];
		a[i]=a[4-i];
		a[4-i]=t;
	}
	for(i=0;i<5;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
	return 0;
}

