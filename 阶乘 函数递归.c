#include<stdio.h>
int main()
{
    int mut(int n);
    int n;
    scanf("%d",&n);
    printf("%d",mut(n));
    return 0;
}
int mut(int n)
{
    int s=1;
    if(n==0||n==1)
        s=1;
    else
        s=mut(n-1)*n;
    return(s);
}