#include<stdio.h>
#include<string.h>
void swap(char *p1,char *p2){
	char p[80];
	strcpy(p,p1);strcpy(p1,p2);strcpy(p2,p);}
int main(){
	char ch1[80],ch2[80],ch3[80];
	scanf("%s%s%s",&ch1,&ch2,&ch3);//gets(ch1);
	char *p1,*p2,*p3;
	p1=ch1;p2=ch2;p3=ch3;  //数组首元素就是地址
	if(strcmp(ch1,ch2)==1) swap(p1,p2);
	if(strcmp(ch1,ch3)==1) swap(p1,p3);
    if(strcmp(ch2,ch3)==1) swap(p2,p3);
	printf("%s %s %s",ch1,ch2,ch3);
	return 0;
}