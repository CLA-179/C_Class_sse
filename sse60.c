// 一个n位正整数如果等于它的n个数字的n次方和，该数称为n位自方幂数。四位自方幂数称为玫瑰花数。求所有的四位玫瑰花数。
// **输出格式要求："四位玫瑰花数有:" "%d\t"
#include <stdio.h>
int qu(int n){
    return n * n * n * n;
}
int main(){
    int m, n, p, q;
    printf("四位玫瑰花数有:");
    for (int i = 1111; i < 10000; i++)
    {
        m = i % 10;
        n = i / 10 % 10;
        p = i / 100 % 10;
        q = i / 1000;
        if (qu(m) + qu(n) + qu(p) + qu(q) == i)
        {
            printf("%d\t", i);
        }
        
    }
    return 0;
}