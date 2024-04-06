// 按如下函数原型计算n名职工的最高收入：
// float FindMax(float income[],int n);
// 在主函数中从键盘输入某单位n名职工的月收入(最多不超过30人，具体人数n由键盘输入)，
// 调用函数FindMax()计算职工的最高月收入返回给主函数，然后在主函数中输出职工的最高月收入。
// **输入提示信息：无
// **输入格式：输入职工人数用"%d"，输入职工工资用"%f"
// **输出提示信息和格式："The highest income is %10.2f\n"
// 注：（1）不能使用指针、结构体、共用体、文件、goto、枚举类型进行编程。
// （2）用纯C语言编程，所有变量必须在第一条可执行语句前定义。

#include <stdio.h>
float FindMax(float income[],int n);
int main(){
    int num;
    float income[30];
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        scanf("%f",&income[i]);
    }
    printf("The highest income is %10.2f\n",FindMax(income, num));
    return 0;
}
float FindMax(float income[],int n){
    float max = income[0];
    for (int i = 1; i < n; i++)
    {
        if (income[i] > max)
        {
            max = income[i];
        }
        
    }
    return max;
}