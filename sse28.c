// 从键盘任意输入一个整数，编程判断它的奇偶性。
// **输入格式要求："%d" 提示信息："Input an integer number:"
// **输出格式要求："a is an even number\n" "a is an odd number\n"
// 程序运行示例1如下：
// Input an integer number:2
// a is an even number
// 程序运行示例2如下：
// Input an integer number:5
// a is an odd number

#include<stdio.h>
int main(){
    printf("Input an integer number:");
    int a;
    scanf("%d",&a);
    if (a % 2 == 1)
    {
        printf("a is an odd number\n");
    }else if (a % 2 != 1)
    {
        printf("a is an even number\n");
    }
    return 0;
    
}