// 下面的函数MyStrcmp()用于实现字符串比较并返回较大字符串的功能，将两个字符串s和t进行比较，
// 要求将两个字符串中第一个不相同字符的ASCII码值之差与较大的字符串作为MyStrcmp()函数的返回值。
// 其中差值用return返回，函数的第三个参数用来存储较大的字符串，也是一种返回方式。找出其中错误并改正之。


#include <stdio.h>
int MyStrcmp(char s[], char t[], char bigger[]);
int main()
{
    char  str1[20], str2[20], str3[20];
    int diff,i = 0;
    printf("Input string:");
    gets(str1);
    printf("Input another string:");
    gets(str2);
    diff = MyStrcmp(str1, str2, str3);
    printf("The bigger string is:");
    while(str3[i] != '\0'){
        printf("%c",str3[i]);
        i++;
    } 
    printf("\nThe differ of the strings is:%d\n", diff);
    return 0;
}
 
int MyStrcmp(char s[], char t[], char bigger[])
{
    int i, result = 0;
    int len1 = 0, len2 = 0;
    while (s[len1++] != '\0');
    while (t[len2++] != '\0');
    for (i = 0; s[i] == t[i]; i++);
    result = (int)s[i] - (int)t[i];
    if (result >= 0)
        for (i = 0; i < len1; i++)
            bigger[i] = s[i];
    else
        for (i = 0; i < len2; i++)
            bigger[i] = t[i];
    return result;
}