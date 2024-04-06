// 将一个字符串插入至另一个源字符串的某个位置：
// 将一个字符串2插入到源字符串1中 第一次出现某字符的位置，并打印出形成的新串。
// 如果 字符串1中找不到输入的字符， 则显示“Not found!”并结束程序。
// 注：源字符串长度及待插入字符串长度不超过50


// 提示信息：
// printf("Input source string 1:\n")
// printf("Input inserted string 2:\n")
// printf("Input a letter to locate the index:\n")

// 输出信息格式：
// printf("The new string is:%s")
// printf(“Not found!”)

// 测试样例1：
// 输入信息：
// Input source string 1:
// abcdecfg
// Input inserted string 2:
// *-*-*-*
// Input the a letter to locate the index:
// c
// 输出结果：
// The new string is:ab*-*-*-*cdecfg

// 测试样例2：
// 输入信息：
// Input source string 1:
// abcdecfg
// Input inserted string 2:
// ****
// Input the a letter to locate the index:
// h
// 输出结果：
// Not found!

#include <stdlib.h>
#include <stdio.h>
void insertString(char source[], char ins[], char res[], char index);
int main(){
    char source[50], ins[50], index;
    char res[100];
    printf("Input source string 1:\n");
    gets(source);
    printf("Input inserted string 2:\n");
    //while(getchar() != '\n');
    gets(ins);
    printf("Input a letter to locate the index:\n");
    scanf(" %c", &index);
    insertString(source, ins, res, index);
    printf("The new string is:%s",res);
    return 0;
}
void insertString(char source[], char ins[], char res[], char index){
    
    int j = 0, m = 0;
    for (int i = 0; source[i] != '\0'; i++)
    {
        res[i] = source[i];
        if (source[i] == index)
        {
            for (j = 0; ins[j] != '\0'; j++)
            {
                res[i + j] = ins[j];
            }
            for ( m = i + j; source[m - j] != '\0'; m++)
            {
                res[m] = source[m - j];
            }
            res[m] = '\0';
            return;
        }
        
    }
    printf("Not found!");
    exit(0);
}