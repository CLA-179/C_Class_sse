// 给定如下定义：
// struct date_rec
//   {
//     int day ;
//     int month ;
//     int year ;
//   } ;
//   struct date_rec current_date ;
// 写一个程序包含如下的函数，完成：
// (a) 输入current_date的值：
// void input_date(struct date_rec *current_date)
// (b) 将current_date增加1天：
// void increment_date(struct date_rec *current_date)
// (c) 显示current_date的值：
// void output_date(struct date_rec *current_date)
// 考虑每个月的实际天数，同时也考虑闰年的情况。

// **输入格式要求："%d%d%d" 提示信息："请输入当前日期（年 月 日）："
// **输出格式要求："当前日期：%d年%d月%d日！" （加1天后的新日期）

#include <stdio.h>

struct date_rec
{
    int day ;
    int month ;
    int year ;
} ;

void output_date(struct date_rec *current_date);
void increment_date(struct date_rec *current_date);
void input_date(struct date_rec *current_date);
int main(){
    struct date_rec current_date ;
    input_date(&current_date);
    increment_date(&current_date);
    output_date(&current_date);
    return 0;
}

void output_date(struct date_rec *current_date){
    printf("当前日期：%d年%d月%d日！", current_date->year, current_date->month, current_date->day);
}
void increment_date(struct date_rec *current_date){
    switch (current_date->month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if (current_date->day == 31)
        {
            current_date->month++;
            current_date->day = 1;
            
        }else
        {
            current_date->day++;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (current_date->day == 30)
        {
            current_date->month++;
            current_date->day = 1;
            
        }else
        {
            current_date->day++;
        }
        break;
        case 2:
            if (current_date->year % 4 == 0 && current_date->year %100 != 0 || current_date->year % 400 == 0)
            {
                if (current_date->day == 29)
                {
                    current_date->month++;
                    current_date->day = 1;
                    
                }else
                {
                    current_date->day++;
                }
            }else
            {
                if (current_date->day == 28)
                {
                    current_date->month++;
                    current_date->day = 1;
                    
                }else
                {
                    current_date->day++;
                }
            }
            break;        
    default:
        if (current_date->day == 31)
        {
            current_date->year++;
            current_date->month = 1;
            current_date->day = 1;
            
        }else
        {
            current_date->day++;
        }
        break;
    }
}
void input_date(struct date_rec *current_date){
    printf("请输入当前日期（年 月 日）：");
    scanf("%d%d%d", &current_date->year, &current_date->month, &current_date->day);
}