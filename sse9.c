// 某班期终考试科目为高等数学MT，英语EN和物理PH，有5人参加考试。为评定奖学金，要求统计并输出一个表格，表格内容包括学号、各科分数、总分和平均分，并标出三门课均在90分以上者（该栏标志输出“Y”，否则输出“N”），表格形式如下：
// NO	MT	EN	PH	SUM	V	>90
// ------------------------------------------------------
// 1	88	87	83	258	86	N
// 2	69	90	88	247	82	N
// 3	77	70	79	226	75	N
// 4	96	99	98	293	97	Y
// 5	77	88	90	255	85	N
// **输入格式要求："%d" 提示信息："Enter No. and score as: MT EN PH\n"
// **输出格式要求：
// "NO\tMT\tEN\tPH\tSUM\tV\t>90\n"  
// "------------------------------------------------------\n"  
// "%d\t%d\t%d\t%d\t%d\t%d\t%c\n"
#include <stdio.h>
#define STUNUM 5
int main(){
    //printf("Enter No. and score as: MT EN PH\n");
    int score[STUNUM][6];
    for (int i = 0; i < STUNUM; i++)
    {
        printf("Enter No. and score as: MT EN PH\n");
        scanf("%d%d%d%d",&score[i][0],&score[i][1],&score[i][2],&score[i][3]);
        score[i][4] = score[i][1] + score[i][2] + score[i][3];
        score[i][5] = score[i][4] / 3;
    }
    printf("NO\tMT\tEN\tPH\tSUM\tV\t>90\n");
    printf("------------------------------------------------------\n");
    for (int i = 0; i < STUNUM; i++)
    {   
        char sign = 'N';
        if(score[i][1] > 90 && score[i][2] > 90 && score[i][3] > 90) sign = 'Y';
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%c\n",score[i][0],score[i][1],score[i][2],score[i][3],score[i][4],score[i][5],sign);
    }
    return 0;
    
}