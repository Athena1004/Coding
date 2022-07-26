#include<stdio.h>


int main()
{
    int a[10];
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("%p\n",&a[i]);

    }
    printf("================\n");
    for(i = 0; i < 10; i++)
    {
        printf("%p\n",&a[0] + i);

    }


    return 0;
}