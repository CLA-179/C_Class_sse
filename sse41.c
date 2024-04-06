// 输入一个英文句子(输入句子以回车作为结束,句子长度包括标点符号并且不超过20)，
// 翻转句子中单词的顺序，但单词内字符的顺序不变。标点符号和普通字母一样处理。例如输入字符串“I am a student.”，则输出“student.a am I”
// 输入提示信息：Input Sentence:
// 输出提示信息：Output Reverse Sentence:

#include <stdio.h>
#include <string.h>
void swapSentence(char str[]);
int main(){
    printf("Input Sentence:");
    char str[20];
    gets(str);
    swapSentence(str);

    return 0;
}
void swapSentence(char str[]){
    char a[5][20];
    int num = 0, front = 0, j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            a[num][j] = str[i];
            j++;
        }else if (str[i] == ' ')
        {
            a[num][j] = '\0';
            num++;
            j = 0;
        }

    }
    a[num][j] = '\0';
    printf("Output Reverse Sentence:");
	for(int i = num; i >= 0; i--)
	{
		if(i!=0)	printf("%s ",a[i]);
		else printf("%s",a[i]);
	}
    
}