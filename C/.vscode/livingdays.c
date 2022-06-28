#include<stdio.h>


/**
 * @brief 判断是否是闰年
 * 是闰年返回1
 * 不是返回0
 * 
 */

int is_leapYear(int y)
{
    if((y%4 == 0 && y%100 != 0)||(y%400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



/**
 * @brief 写一个程序，算一算自己活了多少天
 * days = (1)出生日期离年末的天数 + （2）出生的第二年到去年的天数 + （3）当前日期至年初的天数
 * @return int 
 */
int main()
{
    int birth_y, birth_m, birth_d;
    int cur_y, cur_m, cur_d;
    int days = 0;//总天数
    scanf("%d%d%d",&birth_y, &birth_m, &birth_d);
    scanf("%d%d%d",&cur_y, &cur_m, &cur_d);
    if((birth_y >cur_y)||(birth_y == cur_y && birth_m > cur_m)||(birth_y == cur_y && birth_m == cur_m && birth_d
    > cur_d))
    {
        printf("input error\n");
        return -1;
    }
    if(birth_y != cur_y)
    {
        //（1）出生日期离年末的天数
        switch(birth_m)
        {
            case 1:
                days += 31;
            case 2:
                days += 28;
                if(is_leapYear(birth_y))
                {
                    days++;
                }
            case 3:
                days += 31;
            case 4:
                days += 30;
            case 5:
                days += 31;
            case 6:
                days += 30;
            case 7:
                days += 31;
            case 8:
                days += 31;
            case 9:
                days += 30;
            case 10:
                days += 31;
            case 11:
                days += 30;
            case 12:
                days += 31;
        }
        days -= birth_d;
    
        //（2）出生的第二年到去年的天数
        int i;//年份i
        for(i = birth_y; birth_y <cur_y; birth_y++)
        {
            days += 365;
            if(is_leapYear(i))
            {
                days++;
            }
        }
        
        //（3）当前日期至年初的天数
        switch(cur_m - 1)
        {
            case 0:
            days += 0;
        case 1:
            days += 31;
        case 2:
            if(is_leapYear(cur_y))
            {
                days += 29;
            }
            else
            {
                days += 28;
            }
        case 3:
            days += 31;
        case 4:
            days += 30;
        case 5:
            days += 31;
        case 6:
            days += 30;
        case 7:
            days += 31;
        case 8:
            days += 31;
        case 9:
            days += 30;
        case 10:
            days += 31;
        case 11:
            days += 30;
    }
        days = days + cur_d;
        printf("living days from born was %d\n", days);
    }
    return 0;

}