#include<stdio.h>
#include<string.h>
int a[10],mid,flag=0;
char b[10][8];
int main()
{
	void input(void);
	void paixu(void);
	int chazhao(int x);
	input();
	paixu();
	printf("\n");
	int x;
	scanf("%d",&x);
	chazhao(x);
	if(flag==1)
		printf("not find\n");
	else printf("%s\n",b[mid]);
	return 0;
}

void input(void)
{
	int i;
	for(i=0;i<10;i++)
	{scanf("%d",&a[i]);
	getchar();
	gets(b[i]);}
}

void paixu(void)
{
	int i,j,t;
	char m[10];
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
		if(a[i]>a[j])
		{t=a[i];
		a[i]=a[j];
		a[j]=t;
		strcpy(m,b[i]);
		strcpy(b[i],b[j]);
		strcpy(b[j],m);}
		}
	}
	for(i=0;i<10;i++)
	{printf("\n%5d%10s",a[i],b[i]);}
}

int chazhao(int x)
{
	int low=1,high=10; 
	if((x<a[0])||(x>a[9])||((x!=a[0])&&(x!=a[1])&&(x!=a[2])&&(x!=a[3])&&(x!=a[4])&&(x!=a[5])&&(x!=a[6])&&(x!=a[7])&&(x!=a[8])&&(x!=a[9])))
	{flag=1;}
    while ((low<=high)&&(flag==0))
    {  
        mid=(low+high)/2;  
        if(x<a[mid]) 
        {  
            high=mid-1;  
        }  
        else if(x>a[mid])  
        {  
            low=mid+1;  
        }  
        else  
        {  
            return mid;  
        }  
    }  
    return 0;
}
