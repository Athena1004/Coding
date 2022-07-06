#include<stdio.h>

/**
 * @brief 判断一个一维数组是否为递增？
 *          flag = 1;为递增数组
 *          flag = 0;不为...
 * @return int 
 */
int main()
{
    int i;
    int N = 5;
    int a[N];
    int flag = 1;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if(a[i] > a[i+1])
        {
            flag = 0;
        }
    }
   if(flag) 
   {
        printf("it is  a ascending array");
   }
   else
   {
        printf("it is not a ascending array");
   }

   return 0;
}