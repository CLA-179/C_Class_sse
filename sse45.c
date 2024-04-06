// 找出一个二维数组中的鞍点，即该位置上的元素在该行最大，在该列上最小。也可能没有鞍点。
// **输入数据格式：
// "\n输入行数："
// "%d"
// "\n输入列数："
// "%d"
// "第%d行？\n"
// "%d"
// **输出格式要求：
// "%5d"
// "\n第%d行，第%d列的%d是鞍点\n"
// "\n矩阵中无鞍点!\n"
// 程序的运行示例1如下：
// 输入行数：3
// 输入列数：3
// 第0行？
// 1 2 3
// 第1行？
// 4 5 6
// 第2行？
// 7 8 9
//     1    2    3
//     4    5    6
//     7    8    9

// 第0行，第2列的3是鞍点
// 程序的运行示例2如下：
// 输入行数：2
// 输入列数：2
// 第0行？
// 1 2
// 第1行？
// 4 1
//     1    2
//     4    1

// 矩阵中无鞍点!

#include <stdio.h>
#include <stdlib.h>
int m,n;
void Find(int a[][n]);
int main(){
    printf("\n输入行数：");
    scanf("%d", &m);
    printf("\n输入列数：");
    scanf("%d", &n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        printf("第%d行？\n", i);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    Find(a);
    return 0;
}

void Find(int a[][n]){
    for (int i = 0; i < m; i++)
    {
        int max = a[i][0], index = 0, flag = 1;
        for (int j = 1; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                index = j;
            }
            
        }
        for (int j = 0; j < m; j++)
        {
            if (a[j][index] < max)
            {
                flag = 0;
            }
            
        }
        if (flag)
        {
            printf("\n第%d行，第%d列的%d是鞍点\n", i, index, a[i][index]);
            return;
        }
        
    }
    printf("\n矩阵中无鞍点!\n");
    return;
}