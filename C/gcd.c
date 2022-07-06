#include<stdio.h>

/*
    求最大公约数 和 最小公倍数
*/
//欧几里得算法
/*
int gcd(int m, int n)
{
    int r;
    while(n)
    {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}*/

int gcd(int m, int n)
{
    int min = m < n? n : m;
    int a;
    for(a = min; a > 0; a--)
    {
        if( (m % a == 0)&& (n % a == 0))
        {
            break;
        }
    }
    return a;

}

int gbs(int m , int n)
{
    int max = m > n? m : n;
    int a;
    for(a = max; a <= m*n; a++)
    {
        if((a % m ==0) && (a % n == 0))
        {
            break;
        }
    }
    return a;
}
int main()
{
    int a, b;
    printf("please input the two numbers\n");
    scanf("%d%d",&a, &b);
    int gys_max = gcd(a, b);
    printf("%d\n",gys_max);

    int gbs_min = gbs(a, b);
    printf("%d\n",gbs_min);
    return 0;
}