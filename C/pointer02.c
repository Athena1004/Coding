#include<stdio.h>


void func(int *p)
{
    *p = 250;
}

int main()
{
    int a = 5;
    printf("%d\n",a);
    func(&a);
    printf("%d\n",a);

    return 0;
}