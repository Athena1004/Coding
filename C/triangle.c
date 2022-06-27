#include<stdio.h>

//判断三条边能否够成三角形：任意两条边之和大于第三边
int main()
{
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    if(a + b > c && a + c > b && b + c > a)
    {
        printf("yes, it can be made to a triangle");
    }
    else
    {
        printf("No!!! please input again");
    }

}