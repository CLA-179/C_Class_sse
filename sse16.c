// 用指针编程实现3X4的二维数组的元素读入以及求此二维数组的最大值及最大值下标 
// 请用以下函数实现：
// void Input(int *p,int m, int n);  /*数组元素读入函数*/
// int FindMax(int *p, int m, int n, int *pRow, int *pCol);  /*求最大值及下标函数*/

// 若存在若干个相同最大元素，则按照第一次出现的最大值的下标输出。

// ***输入提示信息："Please input your data:\n"
// ***输入格式要求：无格式要求
// ***输出格式要求："The maximum is %d, which is in row %d, colum %d\n"


// 样例：

// Please input your data:
// **输入样例：
// 3 5 2 7 1 6 12 11 4 10 8 9
// **输出样例：
// The maximum is 12, which is in row 1, colum 2

#include <stdio.h>

void Input(int (*p)[4],int m, int n);
int FindMax(int (*p)[4], int m, int n, int *pRow, int *pCol);

int main(){
    int m = 3, n = 4, pRow, pCol;
    int a[m][n];
    Input( a, m, n);
    int max = FindMax( a, m, n, &pRow, &pCol);
    printf("The maximum is %d, which is in row %d, colum %d\n",max,pRow,pCol);
    return 0;
}

void Input(int (*p)[4],int m, int n){
    printf("Please input your data:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",(p[i])+j);
        }
        //p += n;
    }
    
}

int FindMax(int (*p)[4], int m, int n, int *pRow, int *pCol){
    int max = (*p)[0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(p[i]+j) > max)
            {
                max = *(p[i]+j);
                *pRow = i;
                *pCol = j;
            }
            
        }
        //p += n;
    }
    return max;
}
