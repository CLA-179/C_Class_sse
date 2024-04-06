    // 按如下函数原型用函数编程解决如下的日期转换问题（要求考虑闰年的问题）：
    // /* 函数功能：  对给定的某年某月某日，计算它是这一年的第几天
    // 函数参数：  整型变量year、month、day，分别代表年、月、日          
    // 函数返回值：这一年的第几天 */
    // int  DayofYear(int year, int month, int day);
    // /* 函数功能：    对给定的某一年的第几天，计算它是这一年的第几月第几日
    // 函数入口参数：整型变量year，存储年
    //                  整型变量yearDay，存储这一年的第几天
    // 函数出口参数：整型指针pMonth，指向存储这一年第几月的整型变量
    //                  整型指针pDay，指向存储第几日的整型变量
    // 函数返回值：  无 */
    // void  MonthDay(int year, int yearDay, int *pMonth, int *pDay);
    // 输出如下菜单，用switch语句实现根据用户输入的选择执行相应的操作。
    // 1. year/month/day -> yearDay
    // 2. yearDay -> year/month/day
    // 3. Exit
    // Please enter your choice:
    // 输入提示信息：
    // "Please enter year, month, day:"
    // "Please enter year, yearDay:"
    // 输入格式：
    // "%d,%d,%d"
    // "%d,%d"
    // 输出提示信息和格式：
    // "yearDay = %d\n"
    // "month = %d,day = %d\n"

    #include <stdio.h>
    #include <stdlib.h>

    int  DayofYear(int year, int month, int day);
    void  MonthDay(int year, int yearDay, int *pMonth, int *pDay);

    int main(){
        int choice;
        int y, m, d, yd;
        int *pm, *pd;
        pm = &m;
        pd = &d;
        // while (1)
        // {
            printf("1. year/month/day -> yearDay\n2. yearDay -> year/month/day\n3. Exit\nPlease enter your choice:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                
                printf("Please enter year, month, day:");
                scanf("%d,%d,%d", &y, &m, &d);
                printf("yearDay = %d\n",DayofYear(y, m, d));
                break;
            case 2:

                printf("Please enter year, yearDay:");
                scanf("%d,%d", &y, &yd);
                MonthDay( y, yd, pm, pd);
                printf("month = %d,day = %d\n", *pm, *pd);
                break;
            default:
                exit(0);
            }
        // }
        return 0;
    }
    int  DayofYear(int year, int month, int day){
        int sum = 0;
        for (int i = 1; i < month; i++)
        {
            switch (i)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                sum +=31;
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0)||year % 400 == 0)
                {
                    sum += 29;
                }else
                {
                    sum += 28;
                }
                break;
            default:
                sum += 30;
            }
        }
        sum += day;
        return sum;
    }
    void  MonthDay(int year, int yearDay, int *pMonth, int *pDay){
        int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int sign = ((year % 4 == 0 && year % 100 != 0)||year % 400 == 0) ? 1 : 0 ;
        for (int i = 0; i < 12; i++)
        {
            if (yearDay > day[i])
            {
                if (i == 1 && sign)
                {
                    if (yearDay ==29 )
                    {
                        *pMonth = i + 1;
                        *pDay = yearDay;
                        return;
                    }else
                    {
                        yearDay -= 29;
                    }
                    
                    
                }else{
                    yearDay -= day[i];
                }
            }else
            {
                *pMonth = i + 1;
                *pDay = yearDay;
                return;
            }
        }
        

        
        
    }