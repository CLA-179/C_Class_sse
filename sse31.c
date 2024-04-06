// 写一个函数，将一个字符串中的元音字母复制到另一个字符串，然后输出。
// 程序的运行示例如下：
// 提示信息："\n输入字符串："  
// 字符串中的元音字母是eoo
//  ***输入数据格式***：使用gets() 
//  ***输出数据格式***："\n字符串中的元音字母是%s"
// 程序运行示例：
// 输入字符串：Hello,world!↙
// Hello,world!
// 字符串中的元音字母是eoo

#include<stdio.h>
#include<string.h>
int IsVowel(char lp);

int main(){
    char str[80],resu[80];
    printf("\n输入字符串：");
    gets(str);
    printf("%s",str);
    int len = strlen(str), j = 0;
    for (int i = 0; i < len; i++)
    {
        if (IsVowel(str[i])){resu[j] = str[i]; j++;}
    }
    resu[j] = '\0';
    printf("\n字符串中的元音字母是%s",resu);
    return 0;
}

int IsVowel(char lp){
    if (lp == 'a' || lp =='e' || lp == 'i' || lp == 'o' || lp == 'u')
    {
        return 1;
    }
    return 0;
}