#include<stdio.h>
int main()
{
	void trans(int a[3][3]);
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
	{scanf("%d",&a[i][j]);}
	}
	trans(a);
	return 0;
}
void trans(int a[3][3])
{
	int b[3][3];
	int i,j,n=0;
	for(j=0;j<3;j++)
	{for(i=0;i<3;i++)
	{b[j][i]=a[i][j];
	printf(" %d ",b[j][i]);
	n++;
	if(n%3==0)
	printf("\n");}
	}
}
