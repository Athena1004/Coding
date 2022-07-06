#include<stdio.h>

/**
 * @brief 不用排序，把一个数组中的负数放在数组的前面
 * 
 * @return int 
 */

/*
int main()
{
    int i, j;//A指向要交换的位置，下标为j=0; i为哨兵位置
    int t;//用于交换两个数的中间变量
    int N = 5;
    int a[N];
    for(i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0, j = 0; i < N, j < N; i++)
    {
        if(a[i] < 0)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
            j++;
        }
        printf("%d\n",a[i]);
    }
    
}
*/

int main()
{
    int i, j;
    int N = 5;
    int a[i];
    int t;
    printf("111111111111");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("111111111111");
    for(i = 0, j = N-1; i < j; )
    {
        while(a[i] < 0)
        {
            i++;
        }
        while(a[j] > 0)
        {
            j--;
        }
        while(i < j)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
        printf("%d\n", a[i]);
    }

}