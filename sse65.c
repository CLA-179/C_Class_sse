// 将一个链表按逆序排列，即将链头当链尾，链尾当链头。
// 程序的运行示例如下：
// 请输入链表（非数表示结束）
// 结点值：3
// 结点值：4
// 结点值：5
// 结点值：6
// 结点值：7
// 结点值：end
// 原来表：
//    3   4   5   6   7

// 反转表：
//    7   6   5   4   3

#include <stdio.h>
#include <malloc.h>
typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
} NODE;

int main(){
    NODE *head;
    NODE *tail;
    NODE *ptr;
    tail = (NODE*)malloc(sizeof(NODE));
    tail -> next = NULL;
    ptr = tail;
    printf("\n请输入链表（非数表示结束）\n");
    while (1)
    {
        printf("结点值：");
        int n = scanf("%d", &ptr->data);
        if (n!=1) {
            ptr->prev = NULL;
            break;
        }  
        head = (NODE*)malloc(sizeof(NODE));
        ptr->prev = head;
        head->next = ptr;
        ptr = head;
    }
    printf("\n原来表：\n");
    ptr = tail;
    while (ptr->prev != NULL)
    {
        printf("%4d", ptr->data);
        ptr = ptr->prev;
    }
    printf("\n\n反转表：\n");
    ptr = head;
    do
    {
        ptr = ptr->next;
        printf("%4d", ptr->data);
    } while (ptr->next != NULL);
    return 0;
}