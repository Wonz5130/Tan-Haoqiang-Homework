#include<stdio.h>
void move(int a[],int n,int m);
int main(){
	int a[20];
	int m,n;
	int *x;
	scanf("%d",&n);
	for(x=a;x<a+n;x++){
		scanf("%d",x);}
	scanf("%d",&m);
		move(a,n-m,m);
		for(x=a;x<a+n;x++){  //数组首地址不能++
			printf("%d ",*x);}
		printf("\n");
		return 0;}
/*void move(int a[],int n,int m){
	int *p=a+n-1;
	int *q;
	int b[20];
	int *t;
	int i;
	for(i=0,q=a+n;i<m;q++){
		b[i++]=*q;}
	for(i=n+m-1;p>=a;p--){
		a[i--]=*p;}
	for(i=0,t=b;i<m;t++){
		a[i++]=*t;}
}*/

void move(int a[],int n,int m){
	int *p,a_end;
	a_end=*(a+n+m-1);
	for(p=a+n+m-1;p>a;p--){
		*p=*(p-1);
		*a=a_end;
	m--;}
		if(m>0)move(a,n,m);
}