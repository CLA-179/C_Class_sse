// *输出正六边形。编写程序输出连长为N的空心正六边型，其边由‘*’组成。
// **输入格式要求："%d"  提示信息："Enter length:"
// **输出格式要求："%c"
// 程序运行示例如下：（行与行之间没有空行）
// Enter length:5
//     *****
//    *     *
//   *       *
//  *         *
// *           *
//  *         *
//   *       *
//    *     *
//     *****

#include<stdio.h>

int main(){
    printf("Enter length:");
    int length;
    scanf("%d",&length);
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            printf(" ");
        }
        if (i == 0)
        {
            for (int m = 0; m < length; m++)
            {
                printf("*");
            }
            
        }else
        {
            printf("*");
            for (int m = 0; m < 2 * i + length - 2; m++)
            {
                printf(" ");
            }
            printf("*");
            
        }
        printf("\n");
        
    }
for (int i = length - 2; i > -1; i--)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            printf(" ");
        }
        if (i == 0)
        {
            for (int m = 0; m < length; m++)
            {
                printf("*");
            }
            
        }else
        {
            printf("*");
            for (int m = 0; m < 2 * i + length - 2; m++)
            {
                printf(" ");
            }
            printf("*");
            
        }
        printf("\n");
        
    }
}