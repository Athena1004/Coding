#include<stdio.h>


/**
 * @brief 求Sn = a + aa + aaa + aaa...a(n个a)，其中n,a由用户输入 a:1~9
 * eq:a = 2, n = 5
 * Sn = 2 + 22 + 222 + ...
 * 
 * @return int 
 */
int main()
{
    int a, n;
    printf("please input a and n\n");
    scanf("%d%d", &a, &n);
    int ai = 0, Sn = 0;
    int i;
    for(i = 0; i < n; i++)
    {
        ai = ai*10 + a;
        Sn += ai; 
        printf("sn is %d\n",Sn);
    }
    printf("total sn is %d\n",Sn);
    return 0;

}