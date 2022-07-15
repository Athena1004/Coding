#include<stdio.h>

int main()
{
    int i;
    int sum = 0;
    for(i = 0; i < 1000; i++)
    {
        if(i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;

}

