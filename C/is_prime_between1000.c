#include<stdio.h>

/**
 * @brief 求出1000以内的所有质数
 * 
 * @return int 
 */
int main()
{
    int x, i;
    int flag = 1;
    for(x = 2; x < 1000; x++)
    {
        for(i = 2; i < x; i++)
        {
            if(x % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if(i == x)
        {
            flag = 1;
        }
        if(flag)
        {
            printf("%d is a prime num\n", x);
        }  
    }
    
    
}