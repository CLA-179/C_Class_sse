// 数组旋转：
// 编写程序将如下的一个固定大小的整数数组a[2][3]向右旋转90度，构成新的数组b[3][2]，并打印出来。
// 例如：a=1 2 3
//         4 5 6
// 旋转后
// b=4 1
//   5 2
//   6 3
// **输入提示信息："Array a:\n"
// **输入格式要求："%d"
// **输出格式要求： "Array b:\n" 
// 输出时每个元素的大小为"%4d"
// 程序运行示例如下：
// Array a:
//    1 2 3
//    4 5 6
// Array b:
// 4   1
// 5   2
// 6   3

#include<stdio.h>

int main(){
    int a[2][3],b[3][2];
    printf("Array a:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[j][i] = a[1-i][j];
        }
        
    }
    printf("Array b:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    
}