#include  <stdio.h>
void ReadData(int a[], int n);
void PrintData(int a[], int n);
void  MaxMinExchang(int a[], int n);
void Swap(int *x, int *y);
int main()
{
    int  a[10];    
    printf("Input 10 numbers:");
    ReadData(a, 10);
     
    MaxMinExchang(a, 10);
 
    printf("Exchange results:");
    PrintData(a, 10);
    return 0;
}
/* 函数功能：输入数组a的n个元素值 */
void ReadData(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
/* 函数功能：输出数组a的n个元素值 */
void PrintData(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
}
/* 函数功能：将数组a中的最大数与最小数位置互换 */
void  MaxMinExchang(int a[], int n)
{
    int  maxValue = a[0], minValue = a[0], maxPos = 0, minPos = 0;
    int  i;
    for (i = 1; i < n; i++)
    {
        if (a[i] > maxValue)
        {
            maxValue = a[i];
            maxPos = i;
        }
        if (a[i] < minValue)
        {
            minValue = a[i];
            minPos = i;
        }
    }
//    int *min = $, *max
    Swap(&a[minPos],&a[maxPos]);
 
}
/* 函数功能：两整数值互换 */
void  Swap(int *x, int *y)
{
    int  temp;
 
    temp = *x;
    *x = *y;
    *y = temp;
}