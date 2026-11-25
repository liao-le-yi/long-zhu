#include<stdio.h>
#include<math.h>
int main()
{
	double x;
	scanf("%lf",&x);
	while(x<0||x>=1000)
	{
		printf("请重新输入一个小于1000的正数\n");
		scanf(" %lf",&x);
	}
	int ret=sqrt(x);
	printf("%d\n",ret);
	return 0;
}
