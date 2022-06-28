#include<stdio.h>

/*
    水仙花数是一个三位数（100-999），并且这个三位数它个位，十位，百位上的数字立方和等于其本身
*/
int main()
{
    int x;
    //分别表示x的个十百位数
    int a, b, c;
    for(x = 100 ; x < 1000; x++)
    {
        a = x%10;//个位
        b = (x/10)%10;//十位
        c = (x/100)%10;//百位
        if(x == a*a*a + b*b*b + c*c*c)
        {
            printf("%d\n", x);

        }
        else
        {
            //printf("not sxh hum");
        }
    }
    return 0;

}