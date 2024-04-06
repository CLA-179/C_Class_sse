// 大奖赛现场统分。已知某大奖赛有n个选手参赛，m（m>2）个评委为参赛选手评分（最高10分，最低0分）。
// 统分规则为：在每个选手的m个得分中，去掉一个最高分和一个最低分后，取平均分作为该选手的最后得分。要求编程实现： 
// （1）根据n个选手的最后得分，从高到低输出选手的得分名次表，以确定获奖名单； 
// （2）根据各选手的最后得分与各评委给该选手所评分数的差距，
// 对每个评委评分的准确性和评分水准给出一个定量的评价，每位评委的评分方法为：10 -sqrt（（(评委对选手x的评分 - x的得分)^2 的累加和）/评委人数）），即

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void Fact(float spf[], int code[], int x);
int main()
{
    int n, m; //选手，评委
    int i, j;
    float max, min;
    float sum;
    printf("How many Athletes?");
    scanf("%d", &n);
    printf("How many judges?");
    scanf("%d", &m);
    printf("Scores of Athletes:\n");
    float f[n][m];
    float sf[n], pf[m];
    int code[n];
    int code2[m];
    for (i = 0; i < n; i++)
    {
        sum = 0;
        printf("\nAthlete %d is playing.", i + 1);
        printf("\nPlease enter his number code:");
        scanf("%d", &code[i]);
        for (j = 0; j < m; j++)
        {
            printf("Judge %d gives score:", j + 1);
            scanf("%f", &f[i][j]);
            sum = sum + f[i][j];
        }
        max = f[i][0];
        min = f[i][0];
        for (j = 1; j < m; j++)
        {
            if (f[i][j] > max)
            {
                max = f[i][j];
            }
            if (f[i][j] < min)
            {
                min = f[i][j];
            }
        }
        printf("Delete a maximum score:%.1f\n", max);
        printf("Delete a minimum score:%.1f\n", min);
        printf("The final score of Athlete %d is %.3f\n", code[i], (sum - max - min) / (m - 2));
        sf[i] = (sum - max - min) / (m - 2);
    }
    for (j = 0; j < m; j++)
    {
        sum = 0;
        for (i = 0; i < n; i++)
        {
            sum = sum + (f[i][j] - sf[i]) * (f[i][j] - sf[i]);
        }
        pf[j] = 10 - sqrt(sum / n);
        code2[j] = j + 1;
    }
    printf("Order of Athletes:\n");
    printf("order\tfinal score\tnumber code\n");
    Fact(sf, code, n);
    for (i = 0; i < n; i++)
    {
        printf("%5d\t%11.3f\t%6d\n", i + 1, sf[i], code[i]);
    }
    printf("Order of judges:\n");
    printf("order\tfinal score\tnumber code\n");
    Fact(pf, code2, m);
    for (j = 0; j < m; j++)
    {
        printf("%5d\t%11.3f\t%6d\n", j + 1, pf[j], code2[j]);
    }
    printf("Over!Thank you!\n");
    return 0;
}
void Fact(float spf[], int code[], int x)
{
    int i, j, y;
    float temp;
    for (i = 0; i < x - 1; i++)
    {
        for (j = i + 1; j < x; j++)
        {
            if (spf[i] < spf[j])
            {
                temp = spf[i];
                spf[i] = spf[j];
                spf[j] = temp;
                y = code[i];
                code[i] = code[j];
                code[j] = y;
            }
        }
    }
    return;
}
