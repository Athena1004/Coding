#include<stdio.h>

/**
 * @brief Get the avarage object
 * 
 * @return double 
 */

double get_avarage(int , int , int );

int main()
{
    int a, b, c;
    printf("please enter 3 nums\n");
    scanf("%d%d%d",&a, &b, &c);
    double x = get_avarage(a, b, c);
    printf("the three nums average value is %lf\n", x);
    return 0;
}

double get_avarage(int a , int b, int c)
{
    double average = (a + b + c)/3;
    return average;
}