// 用循环编程计算sum=1*2+3*4+5*6+7*8+...+ 99*100的值。
// 要求：
// **输入格式：无任何信息提示；
// **输出格式："sum=%ld\n"

#include <stdio.h>

int main(){
    long sum = 0;
    for (int i = 0; i < 100; i += 2)
    {
        sum += (i+1)*(i+2);
    }
    printf("sum=%ld\n",sum);
}