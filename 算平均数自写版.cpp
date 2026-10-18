#include<stdio.h>
int main(){
	int x;
	int sum=0;
	int count=0;
	for(;x!=-1;count++){
		scanf("%d",&x);
		if(x==-1)break;
		sum+=x;
	}
	printf("%f\n",1.0*sum/count);
	return 0;
}
	
