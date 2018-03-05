#include<stdio.h>
int main()
{
	int a[100],b[100],i,j,n=1;
	for(i=0;i<100;i++)
	{
		a[i]=i+1;
	}
	b[0]=2;
	for(i=3;i<=100;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{break;}   //跳出本层循环，到j++
			if(j==i-1)
			{
				b[n]=i;
			    n++;
			}
		}
	}
		for(i=0;i<n;i++)
		{
			printf("%5d",b[i]);
		    if((i+1)%5==0)
			printf("\n");
		}
		return 0;
}