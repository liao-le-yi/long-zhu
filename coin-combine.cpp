#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int one;
    int two;
    int five;
    int exit=0;
    for(one=1;one<x*10;one++){
        for(two=1;two<x*10/2;two++){
            for(five=1;five<x*10/2;five++){
                if(one+two*2+five*5==x*10){
                    printf("可以用%d个一角%d个两角%d个五角凑成%d元\n",one,two,five,x);
                    goto out;
                }
            }
        }
    }
    out:
    return 0;
}