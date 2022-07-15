#include<stdio.h>

int main()
{
    int b[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    printf("%p,%p,%p,%p", b, b + 1, &b[0] + 1, &b + 1);
    return 0;

}