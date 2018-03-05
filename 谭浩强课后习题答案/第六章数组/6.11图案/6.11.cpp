#include<stdio.h>
int main()
{
	int a[5][9],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<i+5;j++)
		{if(j<i)
				printf("   ");
		else printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
