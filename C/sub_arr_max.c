#include<stdio.h>

#define N 6

/**
 * @brief 
 * 
 * @return int 
 */

int main()
{
    int a[N], i;
    int max;
    int k;//以ak开头
    int sum;
    for(i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(k = 0; k < N; k++)
    {
        //以ak开头的和
        sum = 0;
        for(i = k; i < N; i++)
        {
            sum += a[i];
            if(sum > max)
            {
                max = sum;

            }

        }
       
    }
     printf(max = %d\n",max);

    return 0;
}