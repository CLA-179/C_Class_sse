#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char a[50][20],s[20];//a用来存储分割后的单词，s用来输入
	int sum=0,flag=0,num=0;//sum记录单词个数 num记录每个单词存储的下下标 flag判断空格
	printf("Input Sentence:");
	gets(s);
	for(int i=0;s[i]!='\0';i++){//flag=0为空格 
		if(flag==0&&s[i]!=' '){//开始时或者空格后的新单词
			flag=1;//遇到单词flag变为1
			a[++sum][0]=s[i];
			num=1;
		}
		else if(flag==1&&s[i]!=' ')//不是新读入的单词 则单词长度++
		{
			a[sum][num++]=s[i];
		}
		if(flag==1&&s[i]==' ')//遇到空格 单词结束输入‘\0’
		{
			a[sum][num]='\0';
			flag=0;//遇到空格flag变为0
		}
	}
	a[sum][num]='\0';//处理最后一个单词
	printf("Output Reverse Sentence:");
	for(int i=sum;i>0;i--)
	{
		if(i!=1)	printf("%s ",a[i]);
		else printf("%s",a[i]);//oj的末尾单词空格判断
	}
	return 0;
}
