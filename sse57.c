// 编程计算a%1 + aa%2 + aaa%3 + ... + aa...a%n(最后一项是n个a对n求余)
// 的值，然后输出这个值。
// （要求存储累加项及总和的变量定义为长整型,a与n定义为整型），
// 其中n和a的值由键盘输入。
// **要求：
// **输入提示信息格式为："Enter n,a:\n"
// **输入格式为："%d,%d"
// **输出格式为："Sum=%ld\n"
// **请严格按照以上要求输入输出，除了以上指定输出结果外，
//      不允许有其他临时输出

#include <stdio.h>
int main(){
    int a, n;
    long sum = 0, temp = 1, na = 0;
    printf("Enter n,a:\n");
    scanf("%d,%d", &n, &a);
    for (int i = 1; i < n + 1; i++)
    {
        na += a * temp;
        temp *= 10;
        sum += na % i;
    }
    printf("Sum=%ld\n", sum);
    return 0;
}