// 从键盘任意输入一个字符串(可以包含：字母、数字、标点符号，以及空格字符)，计算其实际字符个数并打印输出，
//即不使用字符串处理函数strlen()编程，但能实现strlen()的功能。
// 程序运行示例：
// Please enter a string:how are you↙
// The length of the string is: 11
// 程序如下，横线处代表有缺失的源代码，请补充缺少的部分，并将完整的程序代码填写在答题区。

#include  <stdio.h>
unsigned int  MyStrlen(char *pStr); /*  函数声明  */
int main()
{
	char   a[80];
	unsigned int  len;
	printf("Please enter a string:");
	gets(a);   /*   输入字符串   */
	len = MyStrlen(a);      /* 调用函数，计算字符串实际字符个数 */
	printf("The length of the string is: %u\n", len); 
	return 0;
}

/* 函数功能：用字符指针作函数参数，计算字符串的长度 */
unsigned int  MyStrlen(char *pStr)
{ 
	unsigned int len;      /* 声明计数变量 */
	for (int i = 0;pStr[i] != '\0';i++)       /* 循环控制条件  */
	{
		len++;                 /* 统计不包括'\0'在内的字符个数 */
	}
	 return len;      /* 返回实际字符个数 */
}