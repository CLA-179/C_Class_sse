// 某销售公司在年末的时候会向员工发放红包，发放的红包金额共有5种，获取的条件各不相同：　　
// 1) 五颗星红包，每人8000元，平均月绩效大于80件商品（>80），并且在本年度满勤；
// 2) 四颗星红包，每人4000元，平均月绩效大于85件商品（>85），并且在民主评议中高于80分（>80）的员工均可获得；
// 3) 三颗星红包，每人2000元，平均月绩效大于90件商品（>90）的员工均可获得；
// 4) 二颗星红包，每人1000元，平均月绩效大于85件商品（>85）的外地员工均可获得；
// 5) 一颗星红包，每人850元，民主评议高于80分（>80）的优秀员工均可获得；
// 　　只要符合条件就可以获得年终红包，每个级别的红包没有获奖人数限制，每名员工可以同时获得多个级别的红包。
// 　　现在给出若干员工的相关数据，请计算哪位员工获得的红包金额最高。
// 输入：
//     第一行数据用于输入员工总数X（1 <= X <= 100），接下来的X行每行是一名员工的数据，从左向右依次是姓名，平均月绩效，
//     民主评议成绩，是否是优秀员工，是否是外地员工，以及是否年度满勤。姓名是由大小写英文字母组成的长度不超过20的字符串（不含空格）；
//     平均月绩效和民主评议成绩都是0到100之间的整数（包括0和100）；是否是优秀员工、是否是外地员工以及是否年度满勤均用布尔变量表示，
//     Y表示是，N表示不是。每两个相邻数据项之间用一个空格分隔。
// 输出：
//   输出数据包括三行，第一行是获得红包金最多的员工姓名，第二行是这位员工获得的红包金额总数。如果有两名或两名以上的员工获得的奖金最多，
//   输出他们之中在输入数据中出现最早的员工的姓名。第三行是这X名员工获得的红包金额的总数。
// 输入：
// 5 
// a 87 82 Y N N
// b 88 78 N Y Y
// c 92 88 N N N
// d 83 87 Y N Y
// e 90 88 Y N Y
// 输出：
// e
// 12850
// 41550

#include <stdio.h>
#include <stdbool.h>

struct member
{
    char name[20];
    int achievements;
    int score;
    bool outstanding;
    bool nonlocal;
    bool full;
    int money;
};
void GetMoney(struct member *pmem);
bool ch2bool(char ch);
int SumMoney(struct member mem[], int num);
int MaxMoney(struct member mem[], int num);
int main(){
    int num;
    scanf("%d",&num);
    struct member mem[num];
    for (int i = 0; i < num; i++)
    {
        char ou, no, fu;
        scanf(" %s%d%d %c %c %c",&mem[i].name, &mem[i].achievements, &mem[i].score, &ou, &no, &fu);
        mem[i].outstanding = ch2bool(ou);
        mem[i].full = ch2bool(fu);
        mem[i].nonlocal = ch2bool(no);
        GetMoney(&mem[i]);

    } 
    //printf("\n");
    int index = MaxMoney(mem, num);
    printf("%s\n%d\n", mem[index].name, mem[index].money);
    printf("%d", SumMoney(mem, num));
    return 0;
}
bool ch2bool(char ch){
    if (ch == 'N')
    {
        return false;
    }else
    {
        return true;
    }
    
    
}
void GetMoney(struct member *pmem){
    pmem->money = 0;
    if (pmem->achievements > 80 && pmem->full) pmem->money += 8000;
    if (pmem->achievements > 85 && pmem->score >80) pmem->money += 4000;
    if (pmem->achievements > 90) pmem->money += 2000;
    if (pmem->achievements > 85 && pmem->nonlocal) pmem->money += 1000;
    if (pmem->achievements > 80 && pmem->outstanding) pmem->money += 850;
    // printf("%d",pmem->money);
}
int MaxMoney(struct member mem[], int num){
    int max = mem[0].money, index = 0;
    for (int i = 0; i < num; i++)
    {
        if (mem[i].money > max)
        {
            max = mem[i].money;
            index = i;
        }
        
    }
    return index;
}
int SumMoney(struct member mem[], int num){
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += mem[i].money;
    }
    return sum;
}