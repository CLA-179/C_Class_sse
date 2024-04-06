// 从键盘输入1行字符串（每行最多输入80个字符），
// 统计字符串中所包含的各个英文小写字符及其对应的数量。
// **输入格式要求：不要有任何提示信息，直接输入1行字符。
// **输出格式要求：按字母顺序输出统计结果，"%c=%d\n"
// 每行输出一个字母的统计信息。
// 如果某个字母没有出现，则不输出该字母的统计信息。
// 如：输入字符串： 
// abc2ed a7bcdcd
// 则输出：
// a=2
// b=2
// c=3
// d=3
// e=1
#include <stdio.h>
#include <string.h>
#define LETTER 26
#define MAX 80
int main(){
    int letter[LETTER];
    for (int i = 0; i < LETTER; i++)
    {
        letter[i] = 0;
    }
    char str[MAX];
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            letter[(int)str[i] - 97]++;
        }
        
    }
    for (int i = 0; i < LETTER; i++)
    {
        if (letter[i] != 0)
        {
            printf("%c=%d\n", (char)(i + 97), letter[i]);
        }
        
    }
    
    return 0;
}