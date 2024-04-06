// 读入5个正整数并且显示它们。当程序读入的数据为负数时，程序立即终止。
// **输入格式要求："%d" 提示信息："Please enter n:"
// **输出格式要求："n = %d\n" "Program is over!\n"
// 程序运行示例如下：
// Please enter n:10
// n = 10
// Please enter n:20
// n = 20
// Please enter n:-30
// Program is over!

#include <stdio.h>

int main()
{
    int n = 0;
    printf("Please enter n:");
    scanf("%d",&n);
    while(n >= 0){
        printf("n = %d\n",n);
        printf("Please enter n:");
        scanf("%d",&n);
    }
    printf("Program is over!\n");
    return 0;
}