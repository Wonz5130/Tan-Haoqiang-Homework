#include<stdio.h>
void main()
{
	int num,n,nn=0,a[5],i,j=0,k=1;
	scanf("%d",&num);
	if(num<100000&&num>=10000)
	{	n=5;
	    printf("n=%d\n",n);
		for(i=10000;i>=1;)
		{
			a[j]=num/i%10;
			printf("%d ",a[j]);
			nn+=a[j++]*k;
			i/=10;
			k*=10;
		}
		printf("\nnn=%d\n",nn);
	}
	else if(num<10000&&num>=1000)
	{
		n=4;
	    printf("n=%d\n",n);
		for(i=1000;i>=1;)
		{
			a[j]=num/i%10;
			printf("%d ",a[j]);
			nn+=a[j++]*k;
			i/=10;
			k*=10;
		}
		printf("\nnn=%d\n",nn);
	}
	else if(num<1000&&num>=100)
	{
		n=3;
	    printf("n=%d\n",n);
		for(i=100;i>=1;)
		{
			a[j]=num/i%10;
			printf("%d ",a[j]);
			nn+=a[j++]*k;
			i/=10;
			k*=10;
		}
		printf("\nnn=%d\n",nn);
	}
	else if(num<100&&num>=10)
	{	n=2;
		printf("n=%d\n",n);
		for(i=10;i>=1;)
		{
			a[j]=num/i%10;
			printf("%d ",a[j]);
			nn+=a[j++]*k;
			i/=10;
			k*=10;
		}
		printf("\nnn=%d\n",nn);
	}
	else if(num<10&&num>=1)
	{
		n=1;
		printf("n=%d\n%d\nnn=%d\n",n,num,num);
	}
}