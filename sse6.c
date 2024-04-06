// 自己定义一个函数，用字符数组作为函数参数的类型，
// 以实现和函数strlen相同的功能，即在主函数中任意输入
// 一个字符串（长度不超过80个字符），调用该函数计算
// 输入字符串的实际长度，然后打印计算结果。
// 要求按如下函数原型编程实现计算字符串长度的功能。
// int Mystrlen(char str[]);
// 要求必须按照题目要求和用函数编程，否则不给分。
// **要求输入提示信息格式为："Enter a string:"
// **输出格式为："The length of the string is:%d\n"

#include <stdio.h>

int Mystrlen(char str[]);
int main(){

    char str[80];

    printf("Enter a string:");
    gets(str);
    printf("The length of the string is:%d\n",Mystrlen(str));
    return 0;

}

int Mystrlen(char str[]){

    int num = 0;
    while (str[num] != '\0')
    {
        num++;
    }
    return num;
}