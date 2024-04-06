// 有这样一个小游戏，你可以按照下面的步骤一步一步地完成：
// （1）你一般一个星期中哪一天最忙呢？如果是星期一，则选1，如果是星期二，则选2，依此类推，从1、2、3、4、5、6、7中选一个数字；
// （2）将这个数字乘2；
// （3）如果你是男生，则将得到的结果加4，如果你是女生，则将得到的结果加8；
// （4）将得到的结果乘以50；
// （5）如果你是在1~6月出生，则将得到的结果加2002，如果你是在7~12月出生，则将得到的结果加3002；
// （6）将得到的结果减去你出生的年份（例如1988）；
// （7）取结果的后两位，得到一个两位数，将这个两位数加10。
// 你一定会感到惊奇，最后得到的结果竟然是你现在的年龄。请编程实现上述游戏的计算过程，并输出年龄的计算结果。(要求对不符合要求的输入提示"Invalid input." 并不再继续执行以下程序)

// 输入输出格式：
// 输出格式控制字符串：
// "Please input your busiest day.\n"
// "Please input your gender.\n"
// "Please input your birthday.\n"
// "Your age is:%d\n"
// "Invalid input.\n"
// 输入格式控制字符串：
// "%d"
// " %c"
// "%4d-%2d-%2d"
// 输入输出样例：
// 1)
// 输出：Please input your busiest day.
// 输入：1
// 输出：Please input your gender.
// 输入：f
// 输出：Please input your birthday.
// 输入：1988-01-01
// 输出：Your age is:24
// 2)
// 输出：Please input your busiest day.
// 输入：1
// 输出：Please input your gender.
// 输入：m
// 输出：Please input your birthday.
// 输入：1988-01-01
// 输出：Your age is:24
// 3)
// 输出：Please input your busiest day.
// 输入：8
// 输出：Invalid input.
// 4）
// 输出：Please input your busiest day.
// 输入：1
// 输出：Please input your gender.
// 输入：w
// 输出：Invalid input.
// 5）
// 输出：Please input your busiest day.
// 输入：1
// 输出：Please input your gender.
// 输入：m
// 输出：Please input your birthday.
// 输入：1987-02-29
// 输出：Invalid input.

#include <stdio.h>
#include <stdlib.h>
void invalid(){
    printf("Invalid input.");
    exit(0);
}
int main(){
    char gender;
    int busi_day,gen_num,year,month,day,age;
    printf("Please input your busiest day.\n");
    scanf("%d",&busi_day);
    if(busi_day > 7 || busi_day < 0) invalid();
    printf("Please input your gender.\n");
    scanf(" %c",&gender);
    if(gender == 'f'){
        gen_num = 8;
    }else if (gender == 'm')
    {
        gen_num = 4;
    }else invalid();
    
    printf("Please input your birthday.\n");
    scanf("%4d-%2d-%2d",&year,&month,&day);
    if ((month == 2 && day == 29) && !((year % 4 ==0 && year % 100 != 0) || year % 400 == 0))
    {
        invalid();
    }else if(month < 0 || year < 0 || day < 0 || month > 12 || day > 31){
        invalid();
    }else if((month == 4 || month == 6 || month == 9 || month == 11) && day == 31){
        invalid();
    }
    age = ((busi_day * 2) + gen_num) * 50;
    if (month <= 6 )
    {
        age += 2002;
    }else{
        age += 3002;
    }
    age -= year;
    age = 10 + (age % 100);
    printf("Your age is:%d\n",age);
    return 0;
}