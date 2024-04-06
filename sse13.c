// 一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
// **输出格式要求："the total of road is %f\n" "the tenth is %f meter\n"
// 程序运行示例如下：
// the total of road is 299.609375
// the tenth is 0.097656 meter

#include <stdio.h>

int main(){
    double high = 100, sum = 100;
    for (int i = 0; i < 10; i++)
    {
        high /= 2;
        sum += high*2;
    }
    sum -= high*2;
    printf("the total of road is %f\n",sum);
    printf("the tenth is %f meter\n",high);
    return 0;
}