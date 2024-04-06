// 按如下函数原型，用二维数组作为函数参数，编程计算并输出n×n阶矩阵的转置矩阵。
// 其中，n由用户从键盘输入。已知n值不超过10。
// void Transpose(int a[][N], int n);
// void InputMatrix(int a[][N], int n);
// void PrintMatrix(int a[][N], int n);
// **输入提示信息要求："Input n:\n" "Input %d*%d matrix:\n"
// **输入格式："%d"
// **输出提示信息："The transposed matrix is:\n"
// **输出要求："%d\t"
//             输出矩阵时，每输出一行就换行
// 注：不能使用指针、结构体、共用体、文件、goto、枚举类型进行编程。

#include <stdio.h>
#include <stdlib.h>

#define N 10

void Transpose(int a[][N], int n);
void InputMatrix(int a[][N], int n);
void PrintMatrix(int a[][N], int n);

int main(){
    int n, a[N][N];
    printf("Input n:\n");
    scanf("%d", &n);
    printf("Input %d*%d matrix:\n", n, n);
    InputMatrix(a, n);
    Transpose(a, n);
    PrintMatrix(a, n);
    return 0;
}

void Transpose(int a[][N], int n){
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
        
    }
    
}
void InputMatrix(int a[][N], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    
}
void PrintMatrix(int a[][N], int n){
    printf("The transposed matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
}
