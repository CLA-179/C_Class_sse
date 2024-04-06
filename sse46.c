// 请编制一个计算y=f(x)的程序,其中：
//      y = x                 x<1
//      y = -1/x - 1       1<=x<10
//      y = 5x-11             x>=10
// **输入提示信息**："Please input x:\n"
// **输入数据格式**："%f"
// **输出数据格式**："y=%.2f\n"

#include <stdio.h>

int main(){
    printf("Please input x:\n");
    float x, y;
    scanf("%f", &x);
    if (x < 1)
    {
        y = x;
    }else if (x >= 10)
    {
        y = 5 * x - 11;
    }else
    {
        y = -1 / x - 1;
    }
    printf("y=%.2f\n", y);
    return 0;
    
}