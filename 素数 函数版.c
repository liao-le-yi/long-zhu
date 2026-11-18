#include<stdio.h>
int isPrime(int i)
{
	int ret=1;
	int k=2;
	for(k=2;k<i;k++){
		if(i%k==0){
			ret=0;
			break;
		}
	}
	return ret;
}

int main()
{
	int x;
	scanf("%d",&x);
	int ret=isPrime(x);
	if(ret==1)
		printf("%d是素数\n",x);
	if(ret==0)
		printf("%d不是素数\n",x);
	return 0;
}






