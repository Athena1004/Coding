#include<stdio.h>


int main()
{
    int i;
    int sum = 0;
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int* p[10];
    for(i = 0; i < 10; i++)
    {
        p[i] = &a[i];

    }
    int **p;
    pp = p;
    for(i = 0; i < 10; i++)
    {
        sum += **(pp + i);
    }
    printf("%d\n",sum);

    return 0;
}