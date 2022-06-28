#include<stdio.h>

/*
    用while循环来实现，逆序输出一个正整数的各个位上的数字
    eq:183 -->3;8;1;
*/
int main()
{
    int a, d;
    scanf("%d", &a);
    while(a)
    {
        d = a%10;
        printf("%d", d);
        a = a/10;
    }

}