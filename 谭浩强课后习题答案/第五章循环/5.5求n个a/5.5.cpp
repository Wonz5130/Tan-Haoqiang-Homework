#include<stdio.h>
#include<math.h>
int main()
{
	/*int a,Sn=0,n,i;
	scanf("%d%d",&n,&a);
	if(n==1)
		Sn=a;
	else Sn=10;
	for(i=1;i<n;i++)
	{
		Sn=a*pow(10,i)*(n-i)+Sn;
	}
	printf("Sn=%d\n",Sn);*/
	int a,n,i=1,sn=0,tn=0;
	printf("a,n=:");
	scanf("%d,%d",&a,&n);
	while(i<=n)
	{
		tn=tn+a;
		sn=sn+tn;
		a=a*10;
		++i;
	}
	printf("a+aa+aaa+...=%d\n",sn);
	return 0;
}
