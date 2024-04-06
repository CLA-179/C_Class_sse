// *汉诺塔问题是一个著名的问题，初始模型如图所示。其来源据说是在约19世纪末欧洲的商店中出售一种智力玩具，
// 在一块铜板上有三根杆，最左边的杆自上而下、由小到大顺序串着64个圆盘构成的塔，游戏的目的是将最左边A杆上的圆盘，
// 借助最右边的C杆，全部移动到中间的B杆上，条件是一次仅能移动一个盘，且不允许大盘放在小盘的上面。

// **输入格式要求："%d" 提示信息："Please enter the number of discs:"

// **输出格式要求："\tTotal:%d\n"    "%2d-(%2d):%c==>%c\n" 

// 程序运行示例如下： 

// Please enter the number of discs: 
// Please enter the number of discs: 5 
//  1-( 1):a==>b 
//  2-( 2):a==>c 
//  3-( 1):b==>c 
//  4-( 3):a==>b 
//  5-( 1):c==>a 
//  6-( 2):c==>b 
//  7-( 1):a==>b 
//  8-( 4):a==>c 
//  9-( 1):b==>c 
// 10-( 2):b==>a 
// 11-( 1):c==>a 
// 12-( 3):b==>c 
// 13-( 1):a==>b 
// 14-( 2):a==>c 
// 15-( 1):b==>c 
// 16-( 5):a==>b 
// 17-( 1):c==>a 
// 18-( 2):c==>b 
// 19-( 1):a==>b 
// 20-( 3):c==>a 
// 21-( 1):b==>c 
// 22-( 2):b==>a 
// 23-( 1):c==>a 
// 24-( 4):c==>b 
// 25-( 1):a==>b 
// 26-( 2):a==>c 
// 27-( 1):b==>c 
// 28-( 3):a==>b 
// 29-( 1):c==>a 
// 30-( 2):c==>b 
// 31-( 1):a==>b 
//     Total:31

#include <stdio.h>

void Move(int n, char a, char b, char c);
void SingleMove(int n, char a, char b);
int total = 1;
int main(){
    printf("Please enter the number of discs:");
    int n;
    char a = 'a', b = 'b', c = 'c';
    scanf("%d", &n);
    Move(n, a, b, c);
    printf("\tTotal:%d\n", total - 1);
}
void Move(int n, char a, char b, char c){
    if (n == 1)
    {
        SingleMove(n, a, b);
    }else
    {
        Move(n - 1, a, c, b);
        SingleMove(n, a, b);
        Move(n - 1, c, b, a);
    }
    
    
}
void SingleMove(int n, char a, char b){
    printf("%2d-(%2d):%c==>%c\n", total, n, a, b);
    total ++;
}