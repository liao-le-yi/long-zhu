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
		printf("应该找你%.1lf\n",bill-price);
	}
	else if(price>=bill){
		printf("还差%.1lf\n",price-bill);
	}
	return 0;
}