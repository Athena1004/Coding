#include<stdio.h>
#define M 3
#define N 3

int find_array_max(int a[][N], int n)
{
    int i, j;
    int max = a[0][0];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        

    }
    return max;

}

int main()
{
    int a[M][N];
    int i,j;
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("%d",find_array_max(a,3));

    return 0;
}