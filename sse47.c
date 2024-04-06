// 程序改错。
// 以下程序的功能是统计字符数。判断一个由’0’ ~ ‘9’这10个字符组成的字符串中哪个字符出现的次数最多。
// 输入数据：第一行是测试数据的组数m，每组测试数据占1行，每行数据不超过1000个字符且非空。
// 输出要求：m行，每行对应一组输入，包括出现次数最多的字符和该字符出现的次数。如果有多个字符出现的次数相同且最多，那么输出ASCII码最小的那一个。
#include <stdio.h>
#include <string.h>
int main( )
{
    int  cases, sum[10], i, max;

    scanf("%d", &cases);
    while (getchar() != '\n');        
                    
  while (cases > 0)
       {
            char str[1000];
            gets(str);
            for( i = 0; i < 10; i++)
                sum[i] = 0; 
            for(i = 0; i < strlen(str); i++){
                int index = (int)str[i] - 48;
                sum[index]++;
            }
  
            max = 0;   
            for (i = 1; i < 10; i++)
                if(sum[i] > sum[max]) max = i;
            printf("%d %d\n", max, sum[max]);
            cases --;
       }
}