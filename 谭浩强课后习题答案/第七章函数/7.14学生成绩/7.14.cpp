#include<stdio.h>
double a[10][5];
double ave1[10];
double ave2[5];
int main()
{
	void average1(void);
	void average2(void);
	void highest(void);
	double fangcha(void);
	int i,j;
	for(i=0;i<10;i++)
	{for(j=0;j<5;j++)
	{scanf("%lf",&a[i][j]);}
	}
	average1();
	average2();
	for(i=0;i<10;i++)
	{printf("x[%d]=%f ",i+1,ave1[i]);}
	for(i=0;i<5;i++)
	{printf("x[%d]=%f ",i+1,ave2[i]);}
	highest();
	printf("方差是%f\n",fangcha());
	return 0;
}

void average1(void)
{
	int i,j;
	double s1=0;
	for(i=0;i<10;i++)
	{for(j=0,s1=0;j<5;j++)  //每轮结束s1=0
	{s1+=a[i][j];}
	ave1[i]=s1/5;
	}
}

void average2(void)
{
	int i,j;
	double s2=0;
	for(j=0;j<5;j++)
	{for(i=0,s2=0;i<10;i++)  //每轮结束s2=0
	{s2+=a[i][j];}
	ave2[j]=s2/10;
	}
}

void highest(void)
{
	int i,j,m,n;
	double score=0;
	for(i=0;i<10;i++)
	{for(j=0;j<5;j++)
	{if(score<a[i][j])
	{score=a[i][j];
	m=i;
	n=j;}
	}
	}
	printf("最高分数：学生(%d) 课程(%d) \n",m+1,n+1);
}

double fangcha(void)
{
	double xx,x[10],s1,s2;
	s1=s2=0;
	int i;
	for(i=0;i<10;i++)
	{x[i]=ave1[i];}
	for(i=0;i<10;i++)
	{s1+=x[i]*x[i];}
	for(i=0;i<10;i++)
	{s2+=x[i];}
	xx=s1/10-(s2/10)*(s2/10);
	return xx;
}


/*#include<stdio.h>
int main()
{
	double average1(double a[10][5]);
	double average2(double a[10][5]);
	void highest(double a[10][5]);
	double fangcha(double a[10][5]);
	double a[10][5];
	int i,j;
	for(i=0;i<10;i++)
	{for(j=0;j<5;j++)
	{scanf("%lf",&a[i][j]);}
	}
	average1(a);
	printf("\n");
	average2(a);
	printf("\n");
	highest(a);
	printf("\n");
	printf("方差是%f\n",fangcha(a));
	return 0;
}

double average1(double a[10][5])
{
	int i,j;
	double ave1[10];
	double s1=0;
	for(i=0;i<10;i++)
	{for(j=0;j<5;j++)
	{s1+=a[i][j];}
	ave1[i]=s1/5;
	s1=0;}
	for(i=0;i<10;i++)
	{printf("x[%d]=%.2f ",i+1,ave1[i]);
	if((i+1)%5==0)
	{printf("\n");}}
	return 0;
}

double average2(double a[10][5])
{
	int i,j;
	double ave2[5];
	double s2=0;
	for(j=0;j<5;j++)
	{for(i=0;i<10;i++)
	{s2+=a[i][j];}
	ave2[j]=s2/10;
	s2=0;}
	for(j=0;j<5;j++)
	{printf("course[%d]=%.2f ",j+1,ave2[j]);}
	return 0;
}

void highest(double a[10][5])
{
	int i,j,m,n;
	double score=0;
	for(i=0;i<10;i++)
	{for(j=0;j<5;j++)
	{if(score<a[i][j])
	{score=a[i][j];
	m=i;
	n=j;}
	}
	}
	printf("最高分数：学生(%d) 课程(%d) \n",m+1,n+1);
}

double fangcha(double a[10][5])
{
	double xx,x[10],s1,s2;
	s1=s2=0;
	int i,j;
	double ave1[10];
	double s=0;
	for(i=0;i<10;i++)
	{for(j=0;j<5;j++)
	{s+=a[i][j];}
	ave1[i]=s/5;
	s=0;}


	for(i=0;i<10;i++)
	{x[i]=ave1[i];}
	for(i=0;i<10;i++)
	{s1+=x[i]*x[i];}
	for(i=0;i<10;i++)
	{s2+=x[i];}
	xx=s1/10-(s2/10)*(s2/10);
	return xx;
}*/