#include<stdio.h>
int main()
{
    int max(int x,int y);
    int a[10];
    int m,i;
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);

    }
    
    m=max(a[1],a[0]);
    for(i=2;i<=10;i++){
        m=max(m,a[i]);
    }
    printf("max is %d\n",m);
}
int max(int x,int y)
{
    return(x>y? x:y);
}