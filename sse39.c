// 药品的总数量有total克，total为整数类型，其数值由用户从键盘输入。total数量的药品用天平来称量，砝码只有1g, 2g, 5g三种，
// 若要求加的砝码总数为30个，有几种不同的加法？用穷举法编程求解，先输出各个方案，然后输出方案的总数。
// **输入提示信息和格式：无
// **输入格式要求：
//         scanf("%d", &total);
// **输出方案的格式："%2d,%2d,%2d\n"
// **输出方案总数的格式："%d\n"

// 例如：输入 50↙
// 则，程序输出结果如下：
// 10,20, 0↙
// 13,16, 1↙
// 16,12, 2↙
// 19, 8, 3↙
// 22, 4, 4↙
// 25, 0, 5↙
// 6↙

#include<stdio.h>

int main(){
    int one, two, five, total, n = 0;
    scanf("%d", &total);
    for ( one = 0; one < total / 1; one++)
    {
        for ( two = 0; two < (double)total / 2; two++)
        {
            for ( five = 0; five < (double) total / 5; five++)
            {
                if (one + two * 2 + five * 5 == total && one + two + five == 30)
                {
                    printf("%2d,%2d,%2d\n", one, two, five);
                    n++;
                }
                
            }
            
        }
        
    }
    printf("%d\n",n);
    return 0;
    
}