#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int count = 0;
    int i;
    if(n >= 1 && n <=100)
    {
        while(i <= 100)
        {
            if( i % n == 0)
            {
                count++;
                printf("%d\n", i);
            }
            i++;
        }
        printf("count = %d\n",count);

    }
    return 0;
}