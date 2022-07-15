#include<stdio.h>
#define N 5

/**
 * @brief 不用排序，把一个数组中的负数放在数组的前面
 * 
 * @return int 
 */

/*
int main()
{
    int i, j = 0;//A指向要交换的位置，下标为j=0; i为哨兵位置
    int t;//用于交换两个数的中间变量
    int N = 5;
    int a[N];
    for(i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < N; i++)
    {
        if(a[i] < 0)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
            j++;
        }
       
    }
    for(i = 0; i < N; i++)
    {
        printf("%d",a[i]);
    }
}
*/


void func(int a[], int n)
{
    if(n < 1)
    {
        return;
    }
    int low = 0, high = n - 1;
    int t;
    while(low < high)
    {
        if((a[low] < 0) )
        {
            low++;
        }
        if(a[high] > 0)
        {
            high--;
        }
       
        t = a[low];
        a[low] = a[high];
        a[high] = t;
    }

}


int main()
{

    int i;
    int a[N];
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    func(a, N);
    for(i = 0; i < N; i++)
    {
        printf("%d\n",a[i]);
    }
}
