// 填表格
// 将1、2、3、4、5和6填入2行3列的表中，要使得每一个列右边的数字比左边的数字大，每一行下面的数字比上面的数字大。按此要求，可有几种填写方法？
// **输出提示信息："The possible table satisfied above conditions are:\n"
// **输出格式要求："\nNo.:%d" "\n%3d"  "%3d"

#include<stdio.h>

int main(){
    int a[2][3], num = 1;
    a[0][0] = 1;
    a[1][2] = 6;
    printf("The possible table satisfied above conditions are:\n");
    for (a[0][1] = 2; a[0][1] < 6; a[0][1]++)
    {
        for ( a[0][2] = 2; a[0][2] < 6; a[0][2]++)
        {
            if (a[0][2] == a[0][1]) continue;
            for ( a[1][0] = 2; a[1][0] < 6; a[1][0]++)
            {
                if (a[1][0] == a[0][1] || a[1][0] == a[0][2]) continue;
                a[1][1] = 21 - 7 - a[1][0] - a[0][1] - a[0][2];
                if (a[0][2] > a[0][1] && a[1][1] > a[1][0] && a[1][1] > a[2][1])
                {
                    printf("No.:%d\n",num);
                    for (int i = 0; i < 2; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            printf("%3d",a[i][j]);
                        }
                        printf("\n");
                    }
                    num++;
                }
                
            }
            
        }
        
    }
    
}