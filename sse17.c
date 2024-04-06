// 满足特异条件的数列。输入m和n（20≥m≥n≥0），求出满足以下方程式的正整数数列i1,i2,…,in，使得i1+i2+…+in=m，且i1≥i2≥…≥in。例如：
// 当n=4，m=8时，将得到如下5个数列：
// 5 1 1 1  4 2 1 1  3 3 1 1  3 2 2 1  2 2 2 2
// **输入格式要求："%d" 提示信息："Please enter requried terms (<=10):"
//                                "                             their sum:"
// **输出格式要求："There are following possible series:\n" "[%d]:" "%d"
// 程序运行示例1：
// Please enter requried terms (<=10): 4 8
//                             their sum:There are following possible series:
// [1]:5111
// [2]:4211
// [3]:3311
// [4]:3221
// [5]:2222
// 程序运行示例2：
// Please enter requried terms (<=10):4 10
//                              their sum:There are following possible series:
// [1]:7 1 1 1
// [2]:6 2 1 1
// [3]:5 3 1 1
// [4]:4 4 1 1
// [5]:5 2 2 1
// [6]:4 3 2 1
// [7]:3 3 3 1
// [8]:4 2 2 2
// [9]:3 3 2 2

#include<stdio.h>

int j = 1;
int _m;
int _n;
int a[20];

void fun(int sum, int m, int n)
{
    int i;
    for (i = m; i > 0; i--)
    {
        a[_n - n] = i;
        if (n - 1 == 0 && sum + a[_n - n] == _m)
        {
            printf("[%d]", j);
            for (i = 0; i < _n; i++)printf("%d", a[i]);
            printf("\n");
            j++;
            return;
        }
        else if (sum + a[_n - n] >= _m)continue;
        else if (n - 1 > 0) fun(sum + a[_n - n], i, n - 1);
    }
}

int main()
{
    printf("Please enter requried terms (<=10):");
    scanf("%d%d", &_n, &_m);
    printf("                             their sum:");
    printf("There are following possible series:\n");
    fun(0, _m, _n);
    return 0;
}