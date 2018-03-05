#include<stdio.h>
int main()
{
	int a[3][3],i,j,s=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{scanf("%d",&a[i][j]);}
	}
	for(i=0;i<3;i++)
	{
		j=i;
		s+=a[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{printf("%5d",a[i][j]);}
		printf("\n");
	}
	printf("%d\n",s);
	return 0;
}