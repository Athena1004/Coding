#include<stdio.h>

int main()
{
    double l,j;
    printf("请输入当月利润\n");
    scanf("%lf", &l);
    if(l <= 100000)
    {
        j = l * 0.1;
    }
    else if(l <= 200000)
    {
        j = 100000 * 0.1 + (l - 100000) * 0.075;
    }
    else if( l <= 400000)
    {
        j = 100000 * 0.1 +(200000 - 100000) * 0.075 + (l - 200000) * 0.05;
    }
    else if(l <= 600000)
    {
        j = 100000 * 0.1 +(200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (l - 600000)*0.03;
    }
    else if(l <= 1000000)
    {
        j = 100000 * 0.1 +(200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000)*0.03 +
        (l - 600000) * 0.015;
    }
    else 
    {
        j = 100000 * 0.1 +(200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000)*0.03 +
        (1000000 - 600000) * 0.015 + (l - 1000000) * 0.01;
    }
    printf("奖金应该是： %lf\n", j);
    return 0;
}