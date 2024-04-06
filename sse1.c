#include <stdio.h>
 
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n); //输入测试数据个数n
    int a[n]; //定义一个长度为n的整型数组a
    for(i=0;i<n;i++)
        scanf("%d",&a[i]); //输入n个数据，存入数组a中
    for(i=0;i<n;i++){
        if(a[i]==1){ //1既不是素数也不是和数
            continue;
        }
        int flag=1; //定义一个标志位flag，用来判断是否是素数
        for(j=2;j<a[i];j++){
            if(a[i]%j==0) //如果可以被2~a[i]-1之间的任意一个数整除，则不是素数
                flag=0; //将flag置为0，表示不是素数
        }
        if(flag==1) //如果flag仍然等于1，则表明该数是素数
            sum+=a[i]; //将该素数加入sum中
    }
    printf("%d\n",sum); //输出所有素数的和sum
    return 0;
}