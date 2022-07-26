#include<stdio.h>

void swap1(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

void swap2(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int x = 3, y = 4;
    printf("%d, %d\n",x,y);
    swap1(x,y);
    printf("%d, %d\n",x,y);
    swap2(&x,&y);
    printf("%d, %d\n",x,y);

    return 0;
}