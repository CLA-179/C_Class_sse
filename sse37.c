// 请按给定的函数原型编程实现将字符数组中的字符串的第m个字符开始的n个字符逆序存放。
// 要求在主函数读入字符串，且逆序存放后的字符串也在主函数打印。函数原型：
// void  inverse(char  str[],int m,int n);
// 输入要求: 输入的一行字符串，应包含字母，数字以及空格字符
// 友情提示:
// 在执行输入字符串的函数之前,请用getchar();把输入缓冲区中的换行符读出!!!
// ****输入提示信息和格式要求为：
// "input m,n:"
// "%d,%d"
// "input the string:"
// ****输出格式为:"the inverse string:%s"

#include <stdio.h>
#include <stdlib.h>
void  inverse(char  str[],int m,int n);

int main(){
    int m,n;
    char str[80];
    printf("input m,n:");
    scanf("%d,%d",&m,&n);
    while(getchar() != '\n');    
    printf("input the string:");
    gets(str);
    inverse(str,m,n);
    printf("the inverse string:%s",str);
}

void  inverse(char  str[],int m,int n){
    char temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = str[i + m -1];
        str[i + m - 1] = str[m + n - i - 2];
        str[m + n - i - 2] = temp;
    }
    
}
