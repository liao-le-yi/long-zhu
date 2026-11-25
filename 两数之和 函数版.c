#include<stdio.h>
int main()
{
	float add(float x,float y);
	float a,b;
	scanf("%f %f",&a,&b);
	printf("%f\n",add(a,b));
	return 0;
}
float add(float x,float y)
{
	float z;
	z=x+y;
	return(z);
}
