// 某班期末考试科目为数学（MT）、英语（EN）和物理（PH），有最多不超过40人参加考试。请编程计算：（1）每个学生的总分和平均分；（2）每门课程的总分和平均分。
// **输入格式要求："%d" "%ld"(学号) 提示信息："Input the total number of the students(n<40):" "Input student’s ID and score as: MT  EN  PH:\n"
// **输出格式要求："Counting Result:\n" "Student’s ID\t  MT \t  EN \t  PH \t SUM \t AVER\n" 
//                 "%12ld\t"(打印学号) "%4d\t"（打印每门课成绩）"%4d\t%5.1f\n"（打印总分和平均分）
//                  "SumofCourse \t" "%4d\t"(打印每门课的总分) "\nAverofCourse\t" "%4.1f\t"(每门课的平均分) 
// 程序的运行示例如下：
// Input the total number of the students(n<=40):4
// Input student’s ID and score as: MT  EN  PH:
// 070310122  97  87  92
// 070310123  92  91  90
// 070310124  90  81  82
// 070310125  73  65  80
// Counting Result:
// Student’s ID    MT	EN	PH	SUM	AVER
// 070310122	97	87	92	276	92.0
// 070310123	92	91	90	273	91.0
// 070310124	90	81	82	253	84.3
// 070310125	73	65	80	218	72.7
// SumofCourse	352	324	344		
// AverofCourse	88.0	81.0	86.0
#include <stdio.h>
typedef struct stu
{
    long id;
    int mt;
    int en;
    int ph;
    int sum;
    float aver;
} STU;
void input(STU student[], int n);
void SumAver(STU student[], int n);
void SumCAverC(STU student[], int n, int sum[], float aver[]);
int main(){
    printf("Input the total number of the students(n<40):");
    int n;
    scanf("%d", &n);
    STU student[n];
    int sum[3];
    float aver[3];
    input(student,n);
    SumAver(student, n);
    SumCAverC(student, n, sum, aver);
    printf("Counting Result:\nStudent’s ID\t  MT \t  EN \t  PH \t SUM \t AVER\n");
    for (int i = 0; i < n; i++)
    {
        printf("%12ld\t%4d\t%4d\t%4d\t%4d\t%5.1f\n", student[i].id, student[i].mt, student[i].en, student[i].ph, student[i].sum, student[i].aver);
    }
    printf("SumofCourse \t");
    for (int i = 0; i < 3; i++)
    {
        printf("%4d\t", sum[i]);
    }
    printf("\nAverofCourse\t");
    for (int i = 0; i < 3; i++)
    {
        printf("%4.1f\t",aver[i]);
    }
    return 0;
}
void input(STU student[], int n){
    printf("Input student’s ID and score as: MT  EN  PH:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%ld%d%d%d", &student[i].id, &student[i].mt, &student[i].en, &student[i].ph);
    }
    
}
void SumAver(STU student[], int n){

    for (int i = 0; i < n; i++)
    {
        student[i].sum = 0;
        student[i].sum = student[i].mt + student[i].en + student[i].ph;
        student[i].aver = (float)student[i].sum / 3;
    }

    
}
void SumCAverC(STU student[], int n, int sum[], float aver[]){
    sum[0] = 0;
    for (int i = 0; i < n; i++)
        sum[0] += student[i].mt;
    sum[1] = 0;
    for (int i = 0; i < n; i++)
        sum[1] += student[i].en;
    sum[2] = 0;
    for (int i = 0; i < n; i++)
        sum[2] += student[i].ph;
    for (int i = 0; i < 3; i++)
    {
        aver[i] = (float)sum[i] / n;
    }
}
