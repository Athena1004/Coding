#include<stdio.h>
/*
    从键盘上输入一个成绩值（int）,把这个成绩值相应的等级输出
    'A' : [90, 100]
    'B' : [80, 90]
    'C' : [70, 80]
    'D' : [60, 70]
    'E' : [0, 60]

*/
int main()
{
    // 成绩值
    int score;
    // 等级值
    char grade;
    scanf("%d", &score);
    switch( score/10 )
    {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'E';
            break;
    }
}