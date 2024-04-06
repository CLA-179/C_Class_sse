// 实现验证输入的必须全部是数字0～9构成的字符串，利用函数checkNumber验证输入的字符串中的每个字符是否全为数字0～9之一，
// 如果是则返回1，否则返回0。然后利用函数getNumberString容错地读取一个全由数字0～9组成的数字字符串。要求编写完整的程序测试运行你所写的函数。
// 输入语句为："请输入一个全为数字的字符串:\n“
// 输出语句为："你输入的正确的数字串为：%s\n"
// 程序的运行示例如下：
// 请输入一个全为数字的字符串: abc
// 请输入一个全为数字的字符串:a123
// 请输入一个全为数字的字符串:1a23
// 请输入一个全为数字的字符串:123
// 你输入的正确的数字串为：123

#include <stdio.h>

 
int checkNumber (char *str);
void getNumberString (char *str);
 
int main (void)
{
    char str[80];
    
    while(1)
    {
        printf("请输入一个全为数字的字符串:\n");
        gets(str);
        
        int res = checkNumber (str);
        
        if (res == 1)
        {
            printf ("你输入的正确的数字串为：%s\n", str);
            
            break;
        }
    }
    
    return 0;
}
 
int checkNumber (char *str)
{
    char *p;
    p = str;
    
    while (*p != '\0')
    {
        if (*p <= '0' || *p >= '9')
        {
            return 0;
        }
        
        p ++;
    }
    
    return 1;
}