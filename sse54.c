// 从键盘输入每小时登录网络的用户数到一个有24个整型元素的数组中。写一个程序以如下格式显示一个报告：
//      时间			     登录人数		   所占比例
// 0:00 – 1:00        		1                   0.3
// 1:00 – 2:00             	2                   0.7
//      …
// 10:00 - 11:00    		27                  9.0
// 11:00 - 12:00    		28                  9.3
//      …
// 23:00 - 24:00    		8                   2.7
// 最大登录人数28发生在11：00到12：00之间
// 最小登录人数 1发生在  0：00到 1：00之间(两个时间段登录人数相同时，取排在前面的时间)
// 注意：比例后面的%省略，无需输出%，只输出%前面的数即可。

// **输入格式要求："%d" 提示信息："请输入在%d:00和%d:00之间登录的用户数："
// **输出格式要求：
// "   时间                 登录人数                 所占比例\n"
// "%2d:00 - %2d:00 %15d %25.1f\n"
// "最大登录人数%d发生在%2d：00到%2d：00之间\n"
// "最小登录人数%d发生在%2d：00到%2d：00之间\n"

#include <stdio.h>
void print(int n[]){
    int sum = 0;
    for (int i = 0; i < 24; i++)
    {
        sum += n[i];
    }
    printf("   时间                 登录人数                 所占比例\n");
    for (int i = 0; i < 24; i++)
    {
        printf("%2d:00 - %2d:00 %15d %25.1f\n",i,i+1,n[i],((double)n[i]/sum) * 100);
    }
    
}
void MaxMin(int n[]){
    int max = n[0], min = n[0];
    int max_index = 0, min_index = 0;
    for (int i = 0; i < 24; i++)
    {
        if (n[i] > max)
        {
            max = n[i];
            max_index = i;
        }
        if (n[i] < min)
        {
            min = n[i];
            min_index = i;
        }

    }
    printf("最大登录人数%d发生在%2d：00到%2d：00之间\n",n[max_index], max_index, max_index + 1);
    printf("最小登录人数%d发生在%2d：00到%2d：00之间\n",n[min_index], min_index, min_index + 1);    
}
int main(){
    int n[24];
    for (int i = 0; i < 24; i++)
    {
        printf("请输入在%d:00和%d:00之间登录的用户数：",i, i + 1);
        scanf("%d",&n[i]);
    }
    print(n);
    MaxMin(n);
    
}