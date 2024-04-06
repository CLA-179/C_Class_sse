// 英雄卡。小明非常迷恋收集各种干脆面里面的英雄卡，为此他曾经连续一个月都只吃干脆面这一种零食，但是有些稀有英雄卡真的是太难收集到了。
// 后来某商场搞了一次英雄卡兑换活动，只要你有三张编号连续的英雄卡，你就可以换任意编号的英雄卡。
// 小明想知道他最多可以换到几张英雄卡（新换来的英雄卡不可以再次兑换）
// 输入提示信息："Input n:",  "Input card numbers:"
// 输入数据格式："%d"
// 输出数据格式："%d"
// 程序运行结果示例：
// Input n:6
// Input card numbers:3 1 2 4 4 5
// Exchanged:1
#include <stdio.h>
void SortNumber(int num[],int n);
void Input(int num[], int n);
int Exchanged(int num[], int n);
int main(){
    int n;
    printf("Input n:");
    scanf("%d", &n);
    int num[n];
    Input(num, n);
    SortNumber(num, n);
    printf("Exchanged:%d", Exchanged(num, n));
    return 0;
}
void Input(int num[], int n){
    printf("Input card numbers:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    
}
void SortNumber(int num[],int n){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp;
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }

        }

    }

}
int Exchanged(int num[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] + 1 == num[j])
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (num[j] + 1 == num[k])
                    {
                        sum++;
                        num[j] = -2;
                        num[k] = -2;
                    }
                    
                }
                
            }
            
        }
        
    }
    return sum;
}