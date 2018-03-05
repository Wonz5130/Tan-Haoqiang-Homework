#include<stdio.h>
int main()
{
	char a[100],b[100];
	int i=0,n;
	gets(a);
	puts(a);
	while(a[i]!='\0')
	{if((a[i]>='A')&&(a[i]<='Z'))
	b[i]=155-a[i];
	else if((a[i]>='a')&&(a[i]<='z'))
	b[i]=219-a[i];
	else b[i]=a[i];
	i++;
	}
	n=i;
	for(i=0;i<n;i++)
	{putchar(b[i]);}
	printf("\n");
	return 0;
}
