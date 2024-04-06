// 反向输出一个链表（共5个整型元素）。
// 程序运行示例如下：
// please input 5 data==>
// 1 2 3 4 5
// The value is ==>5
// The value is ==>4
// The value is ==>3
// The value is ==>2
// The value is ==>1

#include <stdio.h>
#include <malloc.h>

typedef struct form
{ int data;
  struct form *next;
} FORM;


int main()
{    	  	
    FORM *ptr, *head, *tail;
    int num, i;
    tail = (FORM*)malloc(sizeof(FORM));
    tail->next = NULL;
    ptr = tail;
    printf("\nplease input 5 data==>\n");
    for (i = 0; i <= 4; i++)
    {    	  	
        scanf("%d", &num);
        ptr->data = num;
        head = (FORM*)malloc(sizeof(FORM));
        head->next = ptr;
        ptr = head;
    }
    ptr = ptr->next;
    while (ptr != NULL)
    {    	  	
        printf("The value is ==>%d\n", ptr->data);
        ptr = ptr->next;
    }
}
