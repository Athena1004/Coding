#include<stdio.h>

/**
 * @brief 定义一个一位数组，通过键盘一一赋值
 * 
 * @return int 
 */
int main()
{
    int a[10];
    int i;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }

}