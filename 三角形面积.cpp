#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,z,area;
    double s;
    scanf("%lf %lf %lf",&x,&y,&z);
    s=(x+y+z)/2;
    area=sqrt(s*(s-x)*(s-y)*(s-z));
    printf("area=%f",area);
    return 0;
}