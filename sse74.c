// 2023年度中央机关公开遴选和公开选调公务员笔试成绩即将公布，品学兼优的应届毕业生积极响应国家政策，参加选调生遴选考试，
// 期望前往基层工作以展现自我价值。现要求大家设计程序，通过键盘读入选调生的学号和分数，当输入的学号为0时表示链表创建结束，
// 并将读入的选调生生学号和成绩打印输出。创建动态链表并打印链表内容。下面程序中存在比较隐蔽的错误，请通过分析和调试程序，
// 发现并改正程序中的错误。改错时不能改变程序原有的意图。
// 注意：将修改后的完整的源程序写在答题区内。
#include <stdio.h>
#include <malloc.h>
#define SIZE sizeof(struct node)
struct node
{
    long num;
    float score;
    struct node *next;
};
int main()
{
    int n = 0;
    struct node *head = NULL, *p1, *p2;
    p1 = (struct node*)malloc(SIZE);
    printf("Input %d node data:\n", n + 1);
    scanf("%d%f", &p1->num, &p1->score);
    while (p1->num != 0)
    {
        if (++n == 1)
            head = p1;
        p2 = (struct node*)malloc(SIZE);
        p1->next = p2;
        p1 = p2;
        printf("Input %d node data:\n", n + 1);
        scanf("%d%f", &p1->num, &p1->score);
    }
    p1->next = NULL;
    printf("Prit list:\n");
    if (head != NULL)
    {
         p1=head;     
         while (p1->next != NULL)
        {   
            printf("num:%d\tscore:%.2f\n", p1->num, p1->score);
            p1 = p1->next;
        }
    }
    return 0;
}
