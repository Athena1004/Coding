#include<stdio.h>


/**
 * @brief 质数就是除了1和本身之外，没有其他因数的整数，称之为质数。
 * 
 * @return int 
 */
/*
int main()
{
    int x;
    int i;//被除数
    scanf("%d", &x);
    for(i = 2; i < x; i++)
    {   
        if(x % i == 0)
        {
            break;
        }
    }
    if(i < x)
    {
        printf("%d not a prime num\n", x);
    }
    else
    {
        printf("%d is a prime\n", x);
    }

    return 0;
}
*/
/**
 * 使用flag标记;
 * flag = 1 为质数
 * flag = 0 不为质数
*/
int main()
{
    int flag = 1;
    int x, i;
    scanf("%d",&x);
    for(i = 2; i < x; i++)
    {
        if(x % i == 0)
        {
            flag = 0;
            break;
        }

    }
    if(flag)
    {
        printf("%d is a prime num\n", x);
    }
    else
    {
         printf("%d is not a prime num\n", x);
    }
    return 0;
}
