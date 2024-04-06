// 请进行程序设计，找出n个输入数据中的所有素数，对其进行求和运算。
// 输入说明：
// 输入数据共占两行，第一行为测试数据个数n，第二行为要输入的n个数据(数据类型为int，n<100)，相邻两个输入数据用空格间隔(每个输入数据介于0到100之间，不包括0和100)。
// 输出说明：
// 输出数据占一行，即为输入的n个数中所有素数的和。
// 注：请严格按照输入输出说明编写程序


#include <stdio.h>
 
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(a[i]==1){
            continue;
        }
        int flag=1;
        for(int j=2;j<a[i];j++){
            if(a[i]%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1)
            sum+=a[i];
    }
    printf("%d\n",sum);
    return 0;
}