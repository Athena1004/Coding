#include<stdio.h>

int prime(int n)
{
    int i;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            printf("%d*",i);
            return prime(n/i);
        }
    }
    return n;
}


int main()
{
    int n,r;
    scanf("%d", &n);
    printf("%d=",n);
    r = prime(n);
    printf("%d",r);
    
}