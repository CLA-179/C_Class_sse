//  超长正整数的加法
//    请设计一个算法完成两个超长正整数的加法。
// **输出格式要求："   s1="  "   s2=" "s1+s2="
// 程序运行示例如下：
// 3488934387589
// 374849389
//    s1=3488934387589
//    s2=374849389
// s1+s2=3489309236978

#include<stdio.h>
#include<string.h>

int Add(char* s1, char* s2, char* res);
int ch2int(char ch);

int main(){
    char s1[15],s2[15],s3[15];
    gets(s1);
    gets(s2);
    printf("   s1=%s\n", s1);
    printf("   s2=%s\n", s2);
    printf("s1+s2=");
    for (int i = Add(s1, s2, s3); i >= 0; i--)
    {
        printf("%d", s3[i]);
    }
    return 0;
}

int Add(char* s1, char* s2, char* res){
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i, j, m, sign = 0, temp;
    for (i = len1 - 1, j = len2 - 1, m = 0; i >= 0 && j >= 0; i--, j--, m++)
    {
        temp = ch2int(s1[i]) + ch2int(s2[j]) + sign;
        res[m] = temp % 10;
        sign = temp / 10;
    }
    if (j >= 0)
    {
        for (; j >= 0; j-- ,m++)
        {
            temp = ch2int(s2[j]) + sign;
            res[m] = temp % 10;
            sign = temp / 10;
        }
        
    }else if (i >= 0)
    {
        for (; i >= 0; i-- ,m++)
        {
            temp = ch2int(s1[i]) + sign;
            res[m] = temp % 10;
            sign = temp / 10;
        }
    }else if (sign == 1)
    {
        res[m++] = sign;
    }
    return m - 1;
    
}

int ch2int(char ch){
    return (int)ch - 48;
}