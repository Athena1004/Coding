#include<stdio.h>

/**
 * @brief 连续的正整数之和，一个正整数有可能可以被表示为n(n >=2)个
 * 连续的正整数之和：
 * 如：
 *  15 = 1 + 2 +3 +4 +5
 * 15 = 4 + 5 +6
 * 15 = 7 + 8 
 */
int main()
{
    int x,i,sum,n,y;//n为输入的数字，x为从哪个数开始加
    scanf("%d",&n);
    for(x = 1; x < n; x++)
    {
        sum = 0;
        for(i = x; ;i++)
        {
            sum += i;
            if(sum == n)
            {
                printf("%d = ", n);
                for(y = x; y < i; y++)
                {
                    printf("%d+",y);
                }
                if(y == i)
                {
                    printf("%d\n",y);
                }
                break;
            }
            else if(sum > n)
            {
                break;
            }
        
    }


        }
       

}