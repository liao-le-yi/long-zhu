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
/*
#include<stdio.h>
int main()
{
	//
	int price=0;
	int bill=0;
	//
	printf("输入商品价格\n");
	scanf("%d",&price);
	printf("输入你的金额\n");
	scanf("%d",&bill);
	//
	if(bill>=price){
		printf("应找你%d\n",bill-price);
	}
	else{
		printf("你的钱不够\n");
	}
	return 0;
}
*/