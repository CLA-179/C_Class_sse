// 检验并打印幻方矩阵。在下面的5×5阶幻方矩阵中，每一行、每一列、每一对角线上的元素之和都是相等的，
// 试编写程序将这些幻方矩阵中的元素读到一个二维整型数组中，然后检验其是否为幻方矩阵，并将其按如下格式显示到屏幕上。

// 17	24	1	8	15
// 23	5	7	14	16
// 4	6	13	20	22
// 10	12	19	21	3
// 11	18	25	2	9

// 输出提示信息："It is a magic square!\n"
// 输出格式："%4d"（换行使用"\n"）

#include <stdio.h>
#include <stdlib.h>
int main(){

    int n = 5;
    int a[5][5] = {{17, 24, 1, 8, 15},{23, 5, 7, 14, 16},{4, 6, 13, 20, 22},{10, 12, 19, 21, 3},{11, 18, 25, 2, 9}};
   

    int sum = 0,temp = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    for (int i = 0; i < n; i++)
    {
        temp += a[i][n-i-1];
    }
    if (temp != sum)
    {
        printf("该矩阵不是魔方阵！\n");
        exit(0);
    }else{
        temp = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp += a[i][j];
        }
        if (temp != sum)
        {
            printf("该矩阵不是魔方阵！\n");
            exit(0);
        }else{
            temp = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp += a[j][i];
        }
        if (temp != sum)
        {
            printf("该矩阵不是魔方阵！\n");
            exit(0);
        }else{
            temp = 0;
        }
    }
    printf("It is a magic square!\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}