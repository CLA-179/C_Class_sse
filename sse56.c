// 输入一个字符串保存到数组str中，将str中的数字字符存储到数组tOrigin中，并将其转换为整数输出，用k记录字符串中数字字符的个数。
// 例如：用户输入字符串1243abc3,则将12433取出以整数形式输出。阅读程序，找出其中的错误，并改正之（允许改变数据类型）。

#include <math.h>
#include <stdio.h>

void fun(char *s, char *t, int *k)
{
    int i;
    *k = 0;
    for (i = 0; s[i] != '\0'; i++)
        if ('0' <= s[i] && s[i] <= '9')
        {
            t[(*k)] = s[i];
            *k += 1;
        }
}
void main()
{
    char str[100], tOrigin[9];
    long int n = 0;
    int i, k;
    printf("Please enter string s:");
    scanf("%s", str);
    fun(str, tOrigin, &k);
    for (i = 0; i < k; i++)
        n += (tOrigin [k - 1 - i] - '0') * pow(10, i);
    printf("The result is: %d", n);
}
