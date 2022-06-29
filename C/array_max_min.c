#include<stdio.h>

/**
 * @brief 求一个int类型的数组中的最大值，最小值，元素之和
 * 
 * @return int 
 */
int main()
{
    int i;
    int N = 5;
    int a[N];
    int max, min;
    int sum = 0;
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    //一开始假设数组中任意一个元素为最大值
    max = a[0];
    for(i = 0; i < N; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
        sum += a[i];
        
    }
    printf("the array max  is %d\n", max);
    //一开始假设数组中最小元素值为a[0]
    min = a[0];
    for(i = 0; i < N; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
        sum += a[i];
        
    }
    printf("the array min  is %d\n", min);
}