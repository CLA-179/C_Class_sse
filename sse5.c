// 从键盘输入10个整数，编程统计其中奇数(大于0)的个数。

// 要求输入：%d
//     输出：the odd number is %d
// (注意输出语句末尾不需要输出换行符\n)

#include <stdio.h>

int main(){
    int n = 0,a = 0;
    for (int i = 0; i < 10 ; i++)
    {
        scanf("%d",&a);
        if(a > 0 && a % 2 == 1) n++;
    }
    printf("the odd number is %d",n);
    return 0;
}