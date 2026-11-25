/*#include<stdio.h>
int main()
{
	int a,b,c,x;
	for(x=100;x<=999;x++){
		a=x/100;
		b=x/10%10;
		c=x%10;
		if(a*a*a+b*b*b+c*c*c==x){
			printf("%d\n",x);
		}
	}
	return 0;
}*/


#include<stdio.h>
void print_star();
void print_message();
int main()
{
	print_star();
	print_message();
	print_star();
	return 0;
}
void print_star()
{
	printf("*************\n");
}
void print_message()
{
	printf("Hello Wrold\n");
}
