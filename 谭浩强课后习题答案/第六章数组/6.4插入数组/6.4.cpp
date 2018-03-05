#include<stdio.h>
int main()
{
	int a[11]={1,4,6,9,13,16,19,28,40,100},i,j,x;
	scanf("%d",&x);
	for(i=0;i<10;i++)
	{
		if(x<a[i])
		{
			for(j=10;j>i;j--)
			{a[j]=a[j-1];}
		a[j]=x;
		break;
		}
	}
	for(j=0;j<=10;j++)
	{printf("%5d",a[j]);}
	return 0;
}

