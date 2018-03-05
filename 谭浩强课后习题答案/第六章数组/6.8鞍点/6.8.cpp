/*#include<stdio.h>
#define m 4
#define n 5
int main()
{
	int a[m][n],i,j,k,x,t;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{scanf("%d",&a[i][j]);}
	}
	for(i=0;i<m;i++)
	{
		for(j=0,x=a[i][0];j<n;j++)
		{
			if(x<a[i][j])
			{x=a[i][j];
			t=j;}
		}
		for(k=0;k<m;k++)
		{
			if(x>a[k][j])
			{printf("No 鞍点\n");
			break;}
		}
		if(k==m)
		{printf("鞍点是:a[%d][%d]=%d",i,t,x);
		break;}
		else continue;
	}
	if(i==m)
		printf("No 鞍点\n");
	return 0;
}*/

#include<stdio.h>
#define m 4
#define n 5
int main()
{
	int a[m][n],i,j,k,x,t,flag=1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{scanf("%d",&a[i][j]);}
	}
	for(i=0;i<m;i++)
	{
		for(j=0,x=a[i][0];j<n;j++)
		{
			if(x<a[i][j])
			{x=a[i][j];
			t=j;}
		}
		for(k=0;k<m;k++)
		{
			if(x>a[k][j])
			{flag=0;}
		}
		if(flag==1)
		{printf("鞍点是:a[%d][%d]=%d",i,t,x);
		break;}
		else continue;
	}
	if(flag!=1)
		printf("No 鞍点\n");
	return 0;
}
