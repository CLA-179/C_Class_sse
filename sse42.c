// 某人三天打渔两天晒网，假设他从1990年1月1日开始打渔三天，然后晒网两天，请编程回答任意的一天他在打渔还是晒网。
// A boy works for 3 days while has a 2 days off. If he is working on 1st, Jan, 1990, 
// then for a date entered from the keyboard, please write a program to determine what the boy is doing, working or resting?
// Examples of input and output:
// 1)Input:
// 1990-01-05
// Output:
// He is having a rest.
// 2)Input:
// 1990-01-07
// Output:
// He is working.
// 3)Input:
// 1990-01-33
// Output:
// Invalid input.
// ***输入数据格式***："%4d-%2d-%2d"
// ***输出数据格式***："Invalid input."或"He is having a rest." 或"He is working."

#include <stdio.h>
#include <stdlib.h>

int main(){
    int y, m, d;
    long sum = 0;
    scanf("%4d-%2d-%2d", &y, &m, &d);
    if (y < 1990 || m < 0 || m > 12 || d < 0 || d > 31)
    {
        printf("Invalid input.");
        exit(0);
    }
    
    for (int i = 1990; i < y ; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0)||i % 400 == 0)
        {
            sum += 366;
        }else
        {
            sum += 365;
        }
    }
    for (int i = 1; i < m; i++)
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
            if ((y % 4 == 0 && y % 100 != 0)||y % 400 == 0)
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
    sum += d;
    int result = sum % 5;
    if (result > 0 && result < 4)
    {
        printf("He is working.");
    }else
    {
        printf("He is having a rest.");
    }
    
    return 0;
}