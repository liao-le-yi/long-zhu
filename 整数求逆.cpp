/*#include<stdio.h>
int main()
{
	int x;
	int digit;
	int ret=0;
	scanf("%d",&x);
	while(x>0){
		digit=x%10;
		ret=ret*10+digit;
		x/=10;
	}
	printf("%d\n",ret);
	return 0;
}*/

#include<stdio.h>
int main()
{
	//
	double price=0.0;
	double bill=0.0;
	//
	printf("请输入金额\n");
	scanf("%lf",&price);
	printf("请输入票面\n");
	scanf("%lf",&bill);
	//
	if(price<=bill){
		printf("应该找你%f\n",bill-price);
	}
	else if(price>=bill){
		printf("还差%f\n",price-bill);
	}
	return 0;
}
