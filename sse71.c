// 写一个函数，输入一行字符，将此字符串中最长的单词输出。
// 输入提示信息："输入一行文本：\n"
// 用gets()输入一行字符
// 输出提示信息："\n最长的单词是："
// 输出字符用"%c"
// 输出所有字符后用"\n"
// 程序的运行示例如下：
// 输入一行文本：I am a student.

// 最长的单词是：student
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 80

int main(){
    printf("输入一行文本：\n");
    char str[SIZE];
    int count = 0, first = 0, temp = 0, i = 0, len; 
    gets(str);
    len = strlen(str);
    while (i < len)
    {
        while (str[i] != ' ' && str[i] != '.' && i < len)
        {
            temp++;
            i++;
        }
        if (temp > count)
        {
            first = i - temp;
            count = temp;
            temp = 0;
        }
        i++;
    }
    printf("\n最长的单词是：");
    for (int i = 1; i < count; i++)
    {
        printf("%c", str[first + i]);

    }
    printf("\n");
    return 0;
}