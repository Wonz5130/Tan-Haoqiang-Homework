#include<stdio.h>
int main()
{
	int x,i,j,s;
	for(x=1;x<=1000;x++)
	{
		s=0;
		for(i=1;i<=x;i++)
			if(x%i==0)
			s+=i;
				if(s==x)
				{
					printf("%d,its factors are  ",x);
					for(j=1;j<x;j++)
					if(x%j==0)
					printf("%d  ",j);
				    printf("\n");
				}
	}
	return 0;
}
