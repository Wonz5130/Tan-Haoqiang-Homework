#include<stdio.h>
#include<math.h>
int main()
{
	int x,n=1;
	for(x=100;x<=999;x++)
	{
		if(pow(x/100,3)+pow(x%10,3)+pow(x/10%10,3)==x)
		{
			printf("%d  ",x);
			n++;
		    if(n%5==0)
			printf("\n");
		}
	}
	return 0;
}
