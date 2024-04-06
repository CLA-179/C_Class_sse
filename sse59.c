// 班级共有 m个人，该班C语言的成绩存放在score（score为整数）数组中，计算该班成绩的平均分，并将小于平均分的成绩存储在一个数组中，
// 并打印该数组的值。其中main主函数如下：
// void main()
// {
//     int a[max], n = -1;
//     int i;
//     int below_score[max], below_index[max], below_n;
//     n = ReadScore(a); 
//     below_n = fun(a, n, below_score, below_index); 
//     if (n == 0) 
//     {
//         printf("there are no valid scores\n");
//         exit(0);
//     }
//     printf("the number of the class:%d\n", n);
//     printf("the number under the average score: %d\n", below_n);
//     for (i = 0; i < below_n; i++)
//     {
//         printf("the %dth score is: %d\n", below_index[i] + 1, below_score[i]);
//     }
//  }
// 要求：
// 1.请编写函数fun, 它的功能是：计算平均分（用float类型的变量保存平均分），并将低于平均分的成绩和相应的数组下标分别存在不同的
// 数组中(打印语句放在主函数中)，声明如下：
// int fun(int score[], int m, int below_score[], int below_index[]);
// 2.请编写函数ReadScore，读入成绩，返回输入的有效人数，声明如下：
// int ReadScore(int score[]);
// 3.班级最多有40人，用宏定义数组所含最多的元素数量。

// 输入：每一行输入一个人的成绩，直到输入值为负数时，结束成绩的输入，并将此时拥有的成绩数量，作为班级人数，例如输入下面数据：
// 45
// 67 
// 98
// -1 
// 输出：打印班级的总人数，低于平均分的人数，低于平均分的成绩及该成绩在输入时的序号，从1开始计数，例如：
// the number of the class:3
// the number under the average score: 2
// the 1th score is: 45
// the 2th score is: 67

#include <stdio.h>
#include<stdlib.h>
#define max 40
int ReadScore(int score[]);
int fun(int score[], int m, int below_score[], int below_index[]);
void main()
{
    int a[max], n = -1;
    int i;
    int below_score[max], below_index[max], below_n;
    n = ReadScore(a); 
    below_n = fun(a, n, below_score, below_index); 
    if (n == 0) 
    {
        printf("there are no valid scores\n");
        exit(0);
    }
    printf("the number of the class:%d\n", n);
    printf("the number under the average score: %d\n", below_n);
    for (i = 0; i < below_n; i++)
    {
        printf("the %dth score is: %d\n", below_index[i] + 1, below_score[i]);
    }
}

int ReadScore(int score[]){
    int n = 0;
    do
    {
        scanf("%d", &score[n]);
        n++;
    } while (score[n - 1] != -1);
    return n - 1;
    
}
int fun(int score[], int m, int below_score[], int below_index[]){
    float sum = 0, aver;
    for (int i = 0; i < m; i++)
    {
        sum += score[i];
    }
    aver = sum / m;
    int j = 0;
    for (int i = 0; i < m; i++)
    {
        if (score[i] < aver)
        {
            below_score[j] = score[i];
            below_index[j] = i;
            j++;
        }
        
    }
    return j;
}