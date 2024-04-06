#include <stdio.h>
#include <stdlib.h>
int main(){

    int n;
    printf("请输入矩阵的阶数（<=10）：");
    scanf("%d",&n);
    int a[n][n];
    printf("请输入矩阵：\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]：",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
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
    printf("该矩阵为魔方矩阵！");
    return 0;
}