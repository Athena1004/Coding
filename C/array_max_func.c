#include<stdio.h>

int find_array_max(int a[], int n)
{
    int i;
    int max = a[0];
    for(i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

    }
    return max;

}

int main()
{
    int i;
    int a[5];
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", find_array_max(a,5));
    return 0;
}
