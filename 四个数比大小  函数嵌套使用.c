#include<stdio.h>
int main()
{
	int max4(int a,int b,int c,int d);
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%d\n",max4(a,b,c,d));
	return 0;
}
int max4(int a,int b,int c,int d)
{
	int max2(int x,int y);
	int m;
	m=max2(a,b);
	m=max2(m,c);
	m=max2(m,d);
	return(m);
}
int max2(int x,int y)
{
	int z;
	z=x>y? x:y;
	return(z);
}
