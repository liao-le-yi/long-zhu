#include<stdio.h>
int main()
{
	const int MINOR=35;
	int age=0;
	printf("请输入你的年龄\n");
	scanf("%d",&age);
	if(age<MINOR){
		printf("你的年龄是%d,年轻是美好的\n",age);
	}
	else if(age>=MINOR){
		printf("你的年龄是%d,年龄决定了你的精神世界，好好珍惜吧\n",age);
	}
	return 0;
}
