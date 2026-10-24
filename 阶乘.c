#include<stdio.h>
int main()
{
	int n;
	int fact=1;
	scanf("%d",&n);
	for( int i=1;i<=n;i++){
		fact*=i;
	}
	printf("%d\n",fact);
	return 0;
}
//for(int i=1)这个在C99才行
//可以省去i,for( ;n>1;n--){
//	fact*=n;}

