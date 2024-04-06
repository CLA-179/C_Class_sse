// 程序中函数 fun()的功能: 将一个由八进制数字字符组成的字符串转换为与其值相等的十进制整数。规定输入的字符串最多只能包含5位八进制数字字符。
// **输入格式要求：gets   提示信息："输入一个八进制字符串（5位）:" "错误：字符串太长\n\n" "错误:%c 不是一个八进制字符\n\n"
// **输出格式要求："输入的八进制字符串为" "\n%s 转换成十进制整数为：%d\n"
// 程序运行示例如下：
// 输入一个八进制字符串（5位）:234
// 输入的八进制字符串为234
// 234 转换成十进制整数为：156
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5

int fun(char str[]);
int main(){
    printf("输入一个八进制字符串（5位）:");
    char str[MAX+1];
    gets(str);
    if(strlen(str) > MAX) printf("错误：字符串太长\n\n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] > '7' || str[i] < '0')
        {
            printf("错误:%c 不是一个八进制字符\n\n");
            exit(0);
        }
        
    }
    printf("输入的八进制字符串为%s\n",str);
    printf("\n%s 转换成十进制整数为：%d\n", str, fun(str));    
}
int fun(char str[]){
    int temp = 1, res = 0;
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        res += temp * ((int)str[i] - 48);
        temp *= 8;
    }
    return res;
}