// 梅森尼数
// 形如2^i-1的素数，称为梅森尼数。编程计算并输出指数i在[2,n]中的所有梅森尼数，
// 并统计这些梅森尼数的个数，其中n的值由键盘输入，并且n的值不能大于50。其中，
// 2^i表示2的i次方，请尽量不要使用pow(2,i)编程计算（若要用，请一直使用double计算），应采用循环累乘求积的方式计算2^i。
// 请用下面的函数原型，编写程序。
// int IsPrime(double x);
// 提示：当i超过30以后，2^i-1的值会很大，不能用long型变量来存储，必须使用double类型来存储。
// 对于double类型变量x（不是整型）不能执行求余运算，即不能用x%i == 0来判断x是否能被i整除，可以使用x/i == (long long)(x/i)来判断x是否能被i整除。

// 程序运行示例
// Input n:
// 50↙
// 2^2-1=3
// 2^3-1=7
// 2^5-1=31
// 2^7-1=127
// 2^13-1=8191
// 2^17-1=131071
// 2^19-1=524287
// 2^31-1=2147483647
// count=8

// 输入提示信息："Input n:\n"
// 输入格式: "%d"
// 输出格式： "2^%d-1=%.0f\n"
//            "count=%d\n"

#include<stdio.h>
#include<math.h>

int IsPrime(double x);

int main(){
    printf("Input n:\n");
    int n, count = 0;
    scanf("%d",&n);
    for (int i = 1; i < n + 1; i++)
    {
        double x = pow(2,i) - 1;
        if (IsPrime(x)) {printf("2^%d-1=%.0f\n", i, x); count++;}
    }
    printf("count=%d\n",count);
    return 0;
}

int IsPrime(double x){
    if (x <= 1) return 0;
    int squareRoot = (int)sqrt(x);
    for (int i = 2; i <= squareRoot; i++)
    {
        if (x/i == (long long)(x/i)) return 0;
    }
    return 1; 
}