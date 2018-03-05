#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	do
	{
		scanf("%d",&x);
	}
	while(x>=1000||x<=0);
	x=(int)sqrt(x);
	printf("%d\n",x);
	return 0;
}

