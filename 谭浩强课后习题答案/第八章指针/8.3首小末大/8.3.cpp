/*#include<stdio.h>
void input(int a[],int n);
void swap(int *a,int *b);
void output(int a[],int n);
int main(){
	int a[10],i,t;
	int k1=0;
	int k2=9;
	int *p1,*p2;
	input(a,10);
	for(i=0,t=a[0];i<10;i++){
		if(a[i]<t) {t=a[i];k1=i;}}
	p1=&a[0];p2=&a[k1];
	swap(p1,p2);
	for(i=0,t=a[9];i<10;i++){
		if(a[i]>t) {t=a[i];k2=i;}}
	p1=&a[9];p2=&a[k2];
	swap(p1,p2);
	output(a,10);
	return 0;
	}
	void input(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}}
	void output(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);}}
	void swap(int *a,int *b){
	int c;
	c=*b;*b=*a;*a=c;}*/

#include<stdio.h>
void input(int a[],int n);
void swap(int a[],int n);
void output(int a[],int n);
int main(){
	int a[10];
	input(a,10);
	swap(a,10);
	output(a,10);
	return 0;
	}
	void input(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}}
	void output(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);}}
	/*void swap(int a[],int n){
	int *p1;
	int *max=a;
	int *min=a;
	int t;
	for(p1=a;p1<a+n;p1++){   //p1<a+n,不能写成p1<p1+n,因为p1在自增
		if(*max<*p1) {max=p1;}  //max指向p1指向的大的值
		else if(*min>*p1) {min=p1;}}
	t=*min;*min=a[0];a[0]=t;
	if(max==a) max=min;  //防止第一个数就是最大值
	t=a[9];a[9]=*max;*max=t;
	}*/
	void swap(int a[],int n){
		int *p;
		int *max=a;
		int *min=a;
		int t;
		for(p=a;p<a+n;p++){
			if(*min>*p) min=p;}
		t=*min;*min=a[0];a[0]=t;  //min=a的意思是，min指针指向了数组a首地址，没有交换
		for(p=a;p<a+n;p++){
			if(*max<*p) max=p;}
		t=*max;*max=a[9];a[9]=t;}
