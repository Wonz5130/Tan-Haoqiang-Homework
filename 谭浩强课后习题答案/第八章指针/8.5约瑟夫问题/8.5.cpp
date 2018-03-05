/*#include<stdio.h>
int main(){
	int a[80];
	int n;
	int i,j,k;
	int *p;
	scanf("%d",&n);
	int m=n;
	for(i=0;i<n;i++){
		a[i]=i+1;}
		for(i=0,j=1,p=a+i;m>1;i++){
			if(p==a+(m-1))
			{i=0;p=a+i;n--;j++;}
			if(j<3){j++;p++;}
			else 
			{a[i]=0;j=1;}
			}
		for(i=0;i<n;i++){
			if(a[i]!=0)
				printf("%d",a[i]);}
			return 0;
		}*/


#include<stdio.h>
#define N 5
int main(){
	int i,j,k,a[N+1],*p;
	for(i=0,p=a;p<=a+N;i++,p++)
		*p=i;    //1-N 进行赋值,这里赋值的是0到N-1，所以要注意，后面的都是基于此的
	p=a+1;k=N;
	for(i=0,j=1;k!=1;j++){   //k!=1的意思是只剩下1个数
		if(p>(a+N)) p=a+1;  //构造循环遍历
		if(*p!=0) i++;      //报一下数，人数+1
		if((i-3)==0) {
			*p=0;i=0;k--;}  //报到3的人做一下标志,*p=0,同时i=0,从头开始
		p++;}
	for(i=1;i<=N;i++)
		if(a[i]!=0)
			printf("The last number is %d\n",a[i]);
		return 0;
}



/*#include<stdio.h>
int main(){
	int a[80];
	int n;
	int i,m,k;
	i=k=m=0;
	scanf("%d",&n);
	int *p=a;
	for(i=0;i<n;i++){
		*(p+i)=i+1;}  //编号
	while(m<n-1){     //当退出人数比n-1少时
		if(*(p+i)!=0)
			k++;
		if(k==3){
			*(p+i)=0;  //对退出人数置为0
			k=0;
			m++;}
		i++;
		if(i==n)
			i=0;}   //报数到最后，i恢复为0
	for(p=a;p<a+n;p++){
		if(*p!=0)
			printf("%d",*p);}
	printf("%d",*p);
	return 0;}*/


/*#include <stdio.h>  
  
int main(void) {  
    int n;// 总人数  
    int m;// 用来去除人的那个数  
    int remain;// 剩余人数  
  
    int a[100]; // 用来保存人  
    int i;// 循环临时变量  
  
    // 输入人数，并初始化数组  
    printf("input the number of people:");  
    scanf("%d",&n);  
    for(i=0; i<n; i++)  
        a[i]=i+1;  
  
    // 输出所有人  
    printf("the index of people:  /n");  
    for(i=0; i<n; i++)  
        printf("%5d",a[i]);  
    printf("/n/n");  
  
    // 输入要删除的数字号码  
    printf("input the number you want to delete:");  
    scanf("%d", &m);  
    printf("/n");  
  
    // 依次删除，并打印删除过程  
    remain=n;  
    int count=0;// 依次计数  
    printf("the sequence to delete people:  /n");  
    while(remain>1) {  
        for(i=0; i<n; i++) {  
            if(a[i]!=0) {  
                count++;  
                if(count == m) {  
                    printf("%5d",a[i]);// 打印被删除的人  
                    a[i]=0;   //报数为m的变为0，最后输出时输出非0  
                    count=0;  
                    remain--;  
                }  
            }  
        }  
    }  
    printf("/n/n");  
      
    // 打印最后剩下的人  
    for(i=0; i<n; i++) {  
        if(a[i]!=0) {  
            printf("the last people:   %d/n",a[i]);  
        }  
    }  
    return 0;  
	}*/
