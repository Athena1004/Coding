#include<stdio.h>



double get_avarage(int a , int b, int c)
{
    double average = (a + b + c)/3;
    return average;
}

int main()
{
    int a, b, c;
    printf("please enter 3 nums\n");
    scanf("%d%d%d",&a, &b, &c);
    double x = get_avarage(a, b, c);
    printf("the three nums average value is %lf\n", x);
    return 0;
}