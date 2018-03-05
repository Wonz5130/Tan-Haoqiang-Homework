#include<stdio.h>
int main()
{
	int month(int m);
	int date(int d,int m);
	int tongji(int y,int m,int n);
	int y,m,d;
	scanf("%d%d%d",&y,&m,&d);
	printf("%d年%d月%d日是第%d天\n",y,m,d,tongji(y,m,d));
	return 0;
}

int month(int m)
{
	int day;
	switch(m)
	{case 1:day=0;break;
	case 2:day=31;break;
	case 3:day=59;break;
	case 4:day=90;break;
	case 5:day=120;break;
	case 6:day=151;break;
	case 7:day=181;break;
	case 8:day=212;break;
	case 9:day=243;break;
	case 10:day=273;break;
	case 11:day=304;break;
	case 12:day=334;break;}
	return day;
}

int date(int d,int m)
{
	int sum;
	sum=d+month(m);
	return sum;
}

int tongji(int y,int m,int d)
{
	int S,feb;
	S=date(d,m);
	if(((y%4==0)&&(y%100!=0))||(y%400==0))
			feb=1;
		else feb=0;
		if(m>2)
			S+=feb;
		return S;
}

/*void year(int y)
{
		switch(mon)
	{case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		daysum=31;break;
	case 4:
	case 6:
	case 9:
	case 11:
		daysum=30;break;
	case 2:
		if(((y%4==0)&&(y%100!=0))||(y%400==0))
			daysum=29;
		else daysum=28;
		break;}
}

tongji(int y,int m,int d)
{
	int i;
	for(i=1;i<m;i++)
	{
		s+=year(y);}*/
