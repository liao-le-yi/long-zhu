#include<stdio.h>
int main()
{
	int type; /*switch 语句()中必须是整数型的结果；case后面跟的常量可以是常数，也可以是常数计算的表达式*/
	scanf("%d",&type);
	switch(type){
	case 1:
		printf("hello\n");
		break;
	case 2:
		printf("good\n");
		break;
	case 3:
		printf("nice\n");
		break;
	default:
		printf("ok\n");
		break;
	}
	return 0;
}
