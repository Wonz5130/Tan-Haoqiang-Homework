#include<stdio.h>
#include<math.h>
int main()
{
	int h;
	double t1,t2,t3,t4,x,y;
	scanf("%lf%lf",&x,&y);
	/*float t1,t2,t3,t4,x,y;
	scanf("%f%f",&x,&y);*/
	t1=(x+2)*(x+2)+(y-2)*(y-2);
	t2=(x-2)*(x-2)+(y-2)*(y-2);
	t3=(x-2)*(x-2)+(y+2)*(y+2);
	t4=(x+2)*(x+2)+(y+2)*(y+2);
	/*if((t1-1)<1e-6||(t2-1)<1e-6||(t3-1)<1e-6||(t4-1)<1e-6)*/
	/*if(fabs(t1-1)<1e-6||fabs(t2-1)<1e-6||fabs(t3-1)<1e-6||fabs(t4-1)<1e-6)*/
	if(t1<=1||t2<=1||t3<=1||t4<=1)
		h=10;
		else h=0;
	printf("%d\n",h);
	return 0;
}
