// 给下面程序改错。程序功能是输入10个数，按从小到大顺序排序。
// #include  <stdio.h>
// #define SIZE 10;
// main( )
// { int  i, j, t, a[SIZE];
//    printf("input  10  numbers: \n");
//    for(i = 1;i <= SIZE;i++) 
//          scanf("%d", a[i]); 
//    printf("\n");
//    for (i = 0; i< SIZE; i++) 
//        for (j = SIZE - 1; j >= i + 1; j--)
//            if (a[j] > a[j-1])  
//            {
//         t=a[j];  
//         a[j-1]=a[j]; 
//         a[j]=t;    
//         }
//    for (i = 0; i < SIZE; i++)
//       printf("%d\n", a[i]);
// }
// 注意：
// （1）请将修改正确后的完整源程序拷贝粘贴到答题区内。
// （2）对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分。
// （3）当且仅当错误全部改正，且程序运行结果调试正确，才给加5分。
// （4）改错时不能改变程序原有的意图，也不要改变代码的输入输出格式。

#include  <stdio.h>
#define SIZE 10
int main()
{ 
    int  i, j, t, a[SIZE];
    printf("input  10  numbers: \n");
    for(i = 0; i < SIZE; i++) 
            scanf("%d", &a[i]); 
    printf("\n");
    for (i = 0; i< SIZE; i++) 
    {
       for (j = SIZE - 1; j >= i + 1; j--)
        {
            if (a[j] < a[j-1])  
            {
                t=a[j - 1];  
                a[j-1]=a[j]; 
                a[j]=t;    
            }
        }
    }
    for (i = 0; i < SIZE; i++)
        printf("%d\n", a[i]);
}