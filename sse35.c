// 第8章实验1：学生成绩管理系统V1.0
// 某班有最多不超过30人（具体人数由键盘输入）参加某门课程的考试，用一维数组作函数参数编程实现如下学生成绩管理：
// （1）录入每个学生的学号和考试成绩；
// （2）计算课程的总分和平均分；
// （3）按成绩由高到低排出名次表；
// （4）按学号由小到大排出成绩表；
// （5）按学号查询学生排名及其考试成绩；
// （6）按优秀（90~100）、良好（80~89）、中等（70~79）、及格（60~69）、不及格（0~59）5个类别，统计每个类别的人数以及所占的百分比；
// （7）输出每个学生的学号、考试成绩。

// 程序运行结果示例：
// Input student number(n<30):
// 6↙
// Management for Students' scores
// 1.Input record
// 2.Caculate total and average score of course
// 3.Sort in descending order by score
// 4.Sort in ascending order by number
// 5.Search by number
// 6.Statistic analysis
// 7.List record
// 0.Exit
// Please Input your choice:
// 1↙
// Input student's ID, name and score:
// 11003001 87↙
// 11003005 98↙
// 11003003 75↙
// 11003002 48↙
// 11003004 65↙
// 11003006 100↙
// Management for Students' scores
// 1.Input record
// 2.Caculate total and average score of course
// 3.Sort in descending order by score
// 4.Sort in ascending order by number
// 5.Search by number
// 6.Statistic analysis
// 7.List record
// 0.Exit
// Please Input your choice:
// 2↙
// sum=473,aver=78.83
// Management for Students' scores
// 1.Input record
// 2.Caculate total and average score of course
// 3.Sort in descending order by score
// 4.Sort in ascending order by number
// 5.Search by number
// 6.Statistic analysis
// 7.List record
// 0.Exit
// Please Input your choice:
// 3↙
// Sort in descending order by score:
// 11003006	100
// 11003005	98
// 11003001	87
// 11003003	75
// 11003004	65
// 11003002	48
// Management for Students' scores
// 1.Input record
// 2.Caculate total and average score of course
// 3.Sort in descending order by score
// 4.Sort in ascending order by number
// 5.Search by number
// 6.Statistic analysis
// 7.List record
// 0.Exit
// Please Input your choice:
// 4↙
// Sort in ascending order by number:
// 11003001	87
// 11003002	48
// 11003003	75
// 11003004	65
// 11003005	98
// 11003006	100
// Management for Students' scores
// 1.Input record
// 2.Caculate total and average score of course
// 3.Sort in descending order by score
// 4.Sort in ascending order by number
// 5.Search by number
// 6.Statistic analysis
// 7.List record
// 0.Exit
// Please Input your choice:
// 5↙
// Input the number you want to search:
// 11003004
// 11003004	65
// Management for Students' scores
// 1.Input record
// 2.Caculate total and average score of course
// 3.Sort in descending order by score
// 4.Sort in ascending order by number
// 5.Search by number
// 6.Statistic analysis
// 7.List record
// 0.Exit
// Please Input your choice:
// 6↙
// <60	1	16.67%
// 60-69	1	16.67%
// 70-79	1	16.67%
// 80-89	1	16.67%
// 90-99	1	16.67%
// 100	1	16.67%
// Management for Students' scores
// 1.Input record
// 2.Caculate total and average score of course
// 3.Sort in descending order by score
// 4.Sort in ascending order by number
// 5.Search by number
// 6.Statistic analysis
// 7.List record
// 0.Exit
// Please Input your choice:
// 7↙
// 11003001	87
// 11003002	48
// 11003003	75
// 11003004	65
// 11003005	98
// 11003006	100
// Management for Students' scores
// 1.Input record
// 2.Caculate total and average score of course
// 3.Sort in descending order by score
// 4.Sort in ascending order by number
// 5.Search by number
// 6.Statistic analysis
// 7.List record
// 0.Exit
// Please Input your choice:
// 8↙
// Input error!
// Management for Students' scores
// 1.Input record
// 2.Caculate total and average score of course
// 3.Sort in descending order by score
// 4.Sort in ascending order by number
// 5.Search by number
// 6.Statistic analysis
// 7.List record
// 0.Exit
// Please Input your choice:
// 0↙
// End of program!

// 输入格式:
// （ 1 ）录入学生的人数：
//                  **输入数据格式："%d"
//                  **提示信息："Input student number(n<30):\n"
// （ 2 ）录入每个学生的学号和考试成绩： 
//                **输入数据格式："%ld%f"
//                **提示信息："Input student's ID, name and score:\n"
// 输出格式：
// 菜单项的输出显示：
// Management for Students' scores
// 1.Input record
// 2.Caculate total and average score of course
// 3.Sort in descending order by score
// 4.Sort in ascending order by number
// 5.Search by number
// 6.Statistic analysis
// 7.List record
// 0.Exit
// Please Input your choice:
// 计算课程的总分和平均分：
//               **输出总分与平均分格式："sum=%.0f,aver=%.2f\n"
// 按成绩由高到低排出名次表：
//               **输出格式："%ld\t%.0f\n"
//               **提示信息："Sort in descending order by score:\n"
// 按学号由小到大排出成绩表：
//               **输出格式："%ld\t%.0f\n"
//               **提示信息："Sort in ascending order by number:\n"
// 按学号查询学生排名及其考试成绩：
//                **如果未查到此学号的学生，提示信息："Not found!\n"
//                **如果查询到该学生，输出格式："%ld\t%.0f\n"
// 按优秀（90~100）、良好（80~89）、中等（70~79）、及格（60~69）、不及格（0~59）5个类别，统计每个类别的人数以及所占的百分比：
//                 **成绩<60输出格式："<60\t%d\t%.2f%%\n"
//                 **成绩=100输出格式："%d\t%d\t%.2f%%\n"
//                 **其他输出百分比格式："%d-%d\t%d\t%.2f%%\n"

#include<stdio.h>
#include<stdlib.h>
#define N 30

void Input(long id[],float score[],int n){
    printf("Input student's ID, name and score:\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%ld %f", &id[i], &score[i]);
        getchar();
    }
    
}
void sumAver(long id[],float score[],int n){
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum = sum + score[i];
    printf("sum=%.0f,aver=%.2f\n", sum, sum / n);
}
void SortScore(long id[],float score[],int n){
    double temp1, temp2;
    printf("Sort in descending order by score:\n");
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (score[j] > score[i])
            {

                temp1 = score[i], temp2 = id[i];
                score[i] = score[j], id[i] = id[j];
                score[j] = temp1, id[j] = temp2;
            }
    for (int i = 1; i <= n; i++)
        printf("%ld\t%.0f\n", id[i], score[i]);
}

void SortNumber(long id[],float score[],int n){
    double temp1, temp2;
    printf("Sort in ascending order by number:\n");
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (id[i] > id[j])
            {
                temp1 = score[i], temp2 = id[i];
                score[i] = score[j], id[i] = id[j];
                score[j] = temp1, id[j] = temp2;
            }
    for (int i = 1; i <= n; i++)
        printf("%ld\t%.0f\n", id[i], score[i]);
}

void Search(long id[],float score[],int n){
    long ids;
    printf("Input the number you want to search:\n");
    scanf("%ld", &ids);
    getchar();
    for (int i = 1; i <= n; i++)
    {
        if (ids == id[i])
        {
            printf("%ld\t%.0f\n", id[i], score[i]);
            return;
        }
        else
            continue;

    }
    printf("Not found!\n");
}

void ans(long id[],float score[],int n){
    int p, mark;
    for (int i = 5; i <= 10; i++)
    {
        p = 0;
        for (int j = 1; j <= n; j++)
        {
            mark = score[j] < 60 ? 5 : (int)score[j] / 10;
            if (mark == i)
                p++;
        }
        if (i == 5)
        {
            printf("<60\t%d\t%.2f%%\n", p, (float)p / n * 100);
            continue;
        }
        else if (i >= 6 && i <= 9)
        {
            printf("%d-%d\t%d\t%.2f%%\n", i * 10, i * 10 + 9, p, (float)p / n * 100);
            continue;
        }
        else
            printf("%d\t%d\t%.2f%%\n", i * 10, p, (float)p / n * 100);
    }
}

void List(long id[],float score[],int n){
    for (int i = 1; i <= n; i++)
        printf("%ld\t%.0f\n", id[i], score[i]);
}
void SortascScore(long id[],float score[],int n){
    long temp1, temp2;
    printf("Sort in ascending order by score:\n");
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (score[j] < score[i])
            {
                temp1 = score[i], temp2 = id[i];
                score[i] = score[j], id[i] = id[j];
                score[j] = temp1, id[j] = temp2;
            }
    for (int i = 1; i <= n; i++)
        printf("%ld\t%.0f\n", id[i], score[i]);
}

int main()
{
    int n, choice;
    


    printf("Input student number(n<30):\n");
    while (scanf("%d", &n))
    {
        if (n < N && n > 0)
            break;
        else
        {
            printf("Invalid Input!");
            continue;
        }

    }
    long id[n];
    float score[n];
    while (1)
    {
        void(*p)(long*,float*,int);

        // printf("Management for Students' scores\n");
        // printf("1.Input record\n");
        // printf("2.Caculate total and average score of course\n");
        // printf("3.Sort in descending order by score\n");
        // printf("4.Sort in ascending order by score\n");
        // printf("5.Sort in ascending order by number\n");
        // printf("6.Search by number\n");
        // printf("7.Statistic analysis\n");
        // printf("8.List record\n");
        // printf("0.Exit\n");
        // printf("Please Input your choice:\n");

        printf("Management for Students' scores\n");
        printf("1.Input record\n");
        printf("2.Caculate total and average score of course\n");
        printf("3.Sort in descending order by score\n");
        printf("4.Sort in ascending order by number\n");
        printf("5.Search by number\n");
        printf("6.Statistic analysis\n");
        printf("7.List record\n");
        printf("0.Exit\n");
        printf("Please Input your choice:\n");

        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            p = Input; break;
        case 2:
            p = sumAver; break;
        case 3:
            p = SortScore; break;
        case 4:
            p = SortNumber; break;
        case 5:
            p = Search; break;
        case 6:
            p = ans; break;
        case 7:
            p = List; break;
        case 0:
            printf("End of program!\n");
            exit(0);
        default:
            printf("Input error!\n"); continue;
        }
        (*p)(id, score, n);
    }
    return 0;
}
