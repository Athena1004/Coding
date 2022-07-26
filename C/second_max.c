#include<stdio.h>

#define N 6


int main()
{
    int i, max, second;
    int a[N];
    for(i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    second = a[1];
    for(i = 0; i < N; i++)
    {
        if(a[i] > max)
        {
            second = max;
            max = a[i];

        }
        else if((a[i] != max) && (a[i] > second))
        {
            second = a[i];

        }

    }

    printf("%d\n",second);
    

    return 0;
}