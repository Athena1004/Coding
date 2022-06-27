#include<stdio.h>

int main()
{
    //step1 输入3个数 a,b,c 以及中间变量t
    int a, b, c;
    int t;
    scanf("%d%d%d", &a, &b, &c);

    //step2 确保 按照a<b<c输出
    if(a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if(a > c)
    {
        t = a;
        a = c;
        c = t;
    }
    if(b > c)
    {
        t = b;
        b = c;
        b = t;
    }

    //step3 输出按照从小到大顺序
    printf("%d %d %d",a , b ,c);
    printf("hello~~~~~");
}