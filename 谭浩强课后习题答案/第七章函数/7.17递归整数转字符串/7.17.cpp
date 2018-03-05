#include<stdio.h>
int main()
{
	void zhuan(int n);
	int n;
	scanf("%d",&n);
	if(n<0)
	{putchar('-');putchar(' ');
	n=-n;}
	zhuan(n);
	return 0;
}

void zhuan(int n)
{
	int i=0,j,a[100];
	char str[100];
	while(n!=0)
	{
		a[i]=n%10;
		n=n/10;
		i++;}
	for(j=0;j<i;j++)
	{str[i-j-1]=(a[j]+'0');}
	/*puts(str);*/
	for(j=0;j<i;j++)
		printf("%c ",str[j]);
}
