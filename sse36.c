// 请安如下函数编程实现将一个字符串内所有的小写字母转换成大写字母，字符串由大、小写英文字母、数字、空格等构成。
// 函数原型：
// void Change(char string[])
// 输入提示信息："please input a string:"
// 输出提示信息及格式："changed string is %s\n"
// <友情提示>
// 小写字母和大写字母的ASCII码值之间的差是32

#include <stdio.h>

void Change(char string[]);
int main(){
    char string[80];
    printf("please input a string:");
    gets(string);
    Change(string);
    printf("changed string is %s\n",string);
    return 0;
}
void Change(char string[]){
    int i = 0;
    while (string[i] != '\0')
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] -= 32;
        }
        i++;
    }
    
}