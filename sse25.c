// 编写一个简单的23 根火柴游戏程序，实现人跟计算机玩这个游戏的程序。
// 为了方便程序自动评测，假设计算机移动的火柴数不是随机的，
// 而是将剩余的火柴根数对3求余后再加1来作为计算机每次取走的火柴数。
// 如果剩下的火柴数为2或3，则将计算机打算移走的火柴数减1。如果剩下的火柴数为1时，
// 必须取走1根火柴，计算机不可以不取。
// 游戏规则是：
// 1、两个游戏者开始拥有23 根火柴棒；
// 2、每个游戏者轮流移走1 根、2 根或3 根火柴；
// 3、谁取走最后一根火柴为失败者。
// 输入火柴数目的格式用"%d"

// 玩家赢得运行示例如下： 
// 这里是23根火柴游戏！！
// 注意：最大移动火柴数目为三根
// 请输入您移动的火柴数目：
// 2
// 您移动的火柴数目为：2
// 您移动后剩下的火柴数目为：21
// 计算机移动的火柴数目为：1
// 计算机移动后剩下的火柴数目为：20
// 请输入您移动的火柴数目：
// 2
// 您移动的火柴数目为：2
// 您移动后剩下的火柴数目为：18
// 计算机移动的火柴数目为：1
// 计算机移动后剩下的火柴数目为：17
// 请输入您移动的火柴数目：
// 2
// 您移动的火柴数目为：2
// 您移动后剩下的火柴数目为：15
// 计算机移动的火柴数目为：1
// 计算机移动后剩下的火柴数目为：14
// 请输入您移动的火柴数目：
// 2
// 您移动的火柴数目为：2
// 您移动后剩下的火柴数目为：12
// 计算机移动的火柴数目为：1
// 计算机移动后剩下的火柴数目为：11
// 请输入您移动的火柴数目：
// 2
// 您移动的火柴数目为：2
// 您移动后剩下的火柴数目为：9
// 计算机移动的火柴数目为：1
// 计算机移动后剩下的火柴数目为：8
// 请输入您移动的火柴数目：
// 2
// 您移动的火柴数目为：2
// 您移动后剩下的火柴数目为：6
// 计算机移动的火柴数目为：1
// 计算机移动后剩下的火柴数目为：5
// 请输入您移动的火柴数目：
// 1
// 您移动的火柴数目为：1
// 您移动后剩下的火柴数目为：4
// 计算机移动的火柴数目为：2
// 计算机移动后剩下的火柴数目为：2
// 请输入您移动的火柴数目：
// 1
// 您移动的火柴数目为：1
// 您移动后剩下的火柴数目为：1
// 计算机移动的火柴数目为：1
// 计算机移动后剩下的火柴数目为：0
// 恭喜您！您赢了！

// 玩家输的运行示例如下：
// 这里是23根火柴游戏！！
// 注意：最大移动火柴数目为三根
// 请输入您移动的火柴数目：
// 3
// 您移动的火柴数目为：3
// 您移动后剩下的火柴数目为：20
// 计算机移动的火柴数目为：3
// 计算机移动后剩下的火柴数目为：17
// 请输入您移动的火柴数目：
// 3
// 您移动的火柴数目为：3
// 您移动后剩下的火柴数目为：14
// 计算机移动的火柴数目为：3
// 计算机移动后剩下的火柴数目为：11
// 请输入您移动的火柴数目：
// 3
// 您移动的火柴数目为：3
// 您移动后剩下的火柴数目为：8
// 计算机移动的火柴数目为：3
// 计算机移动后剩下的火柴数目为：5
// 请输入您移动的火柴数目：
// 2
// 您移动的火柴数目为：2
// 您移动后剩下的火柴数目为：3
// 计算机移动的火柴数目为：2
// 计算机移动后剩下的火柴数目为：1
// 请输入您移动的火柴数目：
// 1
// 您移动的火柴数目为：1
// 您移动后剩下的火柴数目为：0
// 对不起！您输了！

// 补充说明：如果输入的火柴数超过3，则输出"对不起！您输入了不合适的数目，请重新输入！\n"，如果玩家赢了，则输出"恭喜您！您赢了！ \n"


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int last = 23,sign=0;
	int q;
	printf("这里是23根火柴游戏！！\n注意：最大移动火柴数目为三根\n");
	while(last > 0)
	{
		if(sign % 2 == 0)
		{
            printf("请输入您移动的火柴数目：\n");
			scanf("%d",&q);
			while(q>last||q>3)
			{
				
				printf("对不起！您输入了不合适的数目，请重新输入！\n");
				scanf("%d",&q);
                
			}
            printf("您移动的火柴数目为：%d\n",q);
			last = last - q;
            printf("您移动后剩下的火柴数目为：%d\n",last);
		}
		else 
		{
            if(last > 3){
                q = last % 3 + 1; 
            }else if (last != 1)
            {
                q = last - 1;
            }else if (last == 1)
            {
                q = 1;
            }
            
            printf("计算机移动的火柴数目为：%d\n",q);
            last = last - q;
            printf("计算机移动后剩下的火柴数目为：%d\n",last);
		}
		
		if(last==0 && (sign % 2 == 0))
			printf("对不起！您输了！ \n" );
        else if (last==0 && (sign % 2 != 0))
        {
            printf("恭喜您！您赢了！ \n");
        }
        
		
		sign++;
	}
}