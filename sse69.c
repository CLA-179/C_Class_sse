// 有n个整数(n<80)，使前面各数顺序向右循环移动（首尾相接）m个位置（m<n）. 利用给定函数 mov 实现以上功能，
// 在主函数中输入n个整数并输出移动m个位置调整后的n个整数。

// 函数原型：void mov(int *x,int n,int m);

// 输入提示信息："Input n,m:"
// 输入n个整数以及移动m个位置数据格式："%d %d"
// 输入数组数据格式："%d"
// 输出提示信息："After moved:\n"
// 输出数据格式："%5d"

// 输入输出样例：
// 输入提示信息：Input n,m:5 3
// 输入：
// 1 2 3 4 5↙
// 输出：
// After moved:
// 3    4    5    1    2
#include <stdio.h>
#define MAX 80
void mov(int *x,int n,int m);
int main(){
    int n, m, x[MAX];
    printf("Input n,m:");
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    mov(x, n, m);
    printf("After moved:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%5d", x[i]);
    }
    
}
void mov(int *x, int n ,int m){
    for (int i = n + m - 1; i - m >= 0; i--)
    {
        x[i] = x[i - m];
    }
    for (int i = 0; i < m; i++)
    {
        x[i] = x[i + n];
    }
    
}