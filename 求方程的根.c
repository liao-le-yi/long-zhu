#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,p,x1,x2,m,n;
	scanf("%lf %lf %lf",&a,&b,&c);
	p=b*b-4*a*c;
	if(p<0){
		printf("This equation hasn't real root\n");
	}
	else{
		m=-b/(2.0*a);
		n=sqrt(p)/(2.0*a);
		x1=m+n;x2=m-n;
		printf("real root:\nx1=%7.2f,x2=%7.2f\n",x1,x2);
		return 0;
	}
}




