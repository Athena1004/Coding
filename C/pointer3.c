#include<stdio.h>

int find_max_v1(int (*b)[4], int n)
{
    int i,j;
    int max = *(b[0]);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(*(*(b+i) + j) > max)
            {
                max =  *(*(b+i) + j);
            }

        }
    }
    return max;
}


int main()
{
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int t = find_max_v1(a,3);
    printf("%d\n",t);
    return 0;
}