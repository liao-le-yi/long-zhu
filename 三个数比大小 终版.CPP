#include<stdio.h>
int max(int x,int y)
{
    int z;
    z=x>y? x:y;
    return(z);
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",max(max(a,b),c));
    return 0;
}
