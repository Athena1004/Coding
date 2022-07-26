#include<stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int (*p)(int, int);
    p = &sum;
    int a = sum(3,5);
    printf("a = %d\n",a);

    a = (*p)(4,5);
    printf("a = %d\n",a);

    a = p(5,5);
    printf("a = %d\n",a);

    return 0;
}