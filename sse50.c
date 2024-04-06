// 输入不超过20个非负整数（输入每个整数后按回车，以-1结束且不计入整数个数），用一维数组作函数参数编程实现如下功能：
// （1）录入每个整数，函数原型：unsigned short ReadNumber(int num[])，num存储输入的整数，返回值为输入整数的个数；
// （2）按由高到低的顺序排序，函数原型：void SortNumberDescending(int num[], unsigned short n)，n为整数个数；
// （3）对这些整数求和及平均值，函数原型：void SummingAveraging(int num[], unsigned short n, int *pSum, float *pAver)，pSum指向和变量，pAver指向平均值变量；
// （4）输出这些整数，函数原型：void  PrintNumber(int num[], unsigned short n) 。
// 主函数中按以下示例形式提示输入、调用函数（1）、调用函数（2）、提示输出、调用函数（4）、调用函数（3）、输出整数和及平均值。
// Input Numbers:
// 87
// 100
// ...
// 23
// -1

// Sort in descending order:
// 100
// ...
// 23

// Sum=474,Aver=59.25

// 输入格式：
// "Input Numbers:\n"
// "%d"
// 输出格式：
// "\nSort in descending order:\n"
// "\nSum=%d,Aver=%.2f\n"
// "%d\n"
#include<stdio.h>
#include<stdlib.h>
 
unsigned short Readnumber(unsigned short* num)
{
    printf("Input Numbers:\n");
    int i;
    for ( i = 0; i < 20 ; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp == -1) break;
        *num = temp;
        num++;
    }
    return i ;
}
void SortNumberDesending(unsigned short num[], unsigned short n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (num[j] < num[j + 1])
            {
                int temp;
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
 
        }
 
    }
 
}
void SummingAveraging(unsigned short num[], unsigned short n, int* pSum, float* pAver)
{
    int sum = 0;
    float aver;
    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }
    aver = (float)sum / (float)n;
    *pSum = sum;
    *pAver = aver;
}
void PrintNumber(unsigned short num[], unsigned short n, int sum, float aver)
{
    printf("\nSort in descending order:\n");
    for (short i = 0; i < n; i++)
    {
        printf("%d\n", num[i]);
    }
    printf("\nSum=%d,Aver=%.2f\n", sum, aver);
}
int main()
{
    int sum;
    float aver;
    unsigned short num[20], n;
    n = Readnumber(num);
    SortNumberDesending(num, n);
    SummingAveraging(num, n, &sum, &aver);
    PrintNumber(num, n, sum, aver);
    system("pause");
    return 0;
}