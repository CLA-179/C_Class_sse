// 输入3个数x,y,z，按从小到大顺序排序后输出。
// 要求：利用指针方法实现两数互换，函数原型为：void swap(int *p1,int *p2);
// 输入提示：printf("please input 3 number x,y,z");
// 输入格式："%d,%d,%d"
// 输出格式：printf("the sorted numbers are:%d,%d,%d\n",  );
#include<stdio.h>
void swap(int *p1,int *p2);
int main(){
    printf("please input 3 number x,y,z");
    int x,y,z;
    scanf("%d,%d,%d",&x,&y,&z);
    if (x > y)
    {
        swap(&x,&y);
    }
    if (y > z)
    {
        swap(&y,&z);
    }
    if (x > y)
    {
        swap(&x,&y);
    }
    printf("the sorted numbers are:%d,%d,%d\n",x,y,z);
    return 0;
}

void swap(int *p1,int *p2){
    *p1 += *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
}