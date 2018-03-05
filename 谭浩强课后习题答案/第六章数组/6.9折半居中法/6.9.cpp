#include<stdio.h>
int main()
{
	int a[15],i=0,x,flag=0,min=0,max=14,mid,loca;
	do
	{scanf("%d",&a[i]);
	i++;}
	while(i<15);
	scanf("%d",&x);
	while((!flag)&&(min<=max))
	{
		mid=(min+max)/2;
	if(x==a[mid])
	{loca=mid;
	printf("%d---a[%d]\n",x,loca);
	flag=1;}
	else if(x<a[mid])
    max=mid-1;
	else 
		min=mid+1;
	}
	if(flag!=1||loca==-1)
		printf("not find\n");
	return 0;
}

