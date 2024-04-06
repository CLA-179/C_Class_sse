// 21根火柴游戏。现有21根火柴，两人轮流取，每人每次可以取1至4根，不可多取（假如多取或者取走的数量不在合法的范围内，则要求重新输入），
//也不能不取，谁取最后一根火柴谁输。请编写一个程序进行人机对弈，要求人先取，计算机后取；请设计一种计算机取走火柴的规则，使得计算机一方为常胜将军。
// **输入格式要求："%d" 提示信息："Game begin:\n"  "How many sticks do you wish to take (1~%d)?"
// **输出格式要求：" %d sticks left in the pile.\n"   " You have taken the last sticks.\n"
//  " ***You lose!\nGame Over.\n"  "Computer take %d sticks.\n"
// 程序运行示例如下：
// Game begin:
// How many sticks do you wish to take (1~4)?6
// How many sticks do you wish to take (1~4)?3
//  18 sticks left in the pile.
// Computer take 2 sticks.
//  16 sticks left in the pile.
// How many sticks do you wish to take (1~4)?3
//  13 sticks left in the pile.
// Computer take 2 sticks.
//  11 sticks left in the pile.
// How many sticks do you wish to take (1~4)?3
//  8 sticks left in the pile.
// Computer take 2 sticks.
//  6 sticks left in the pile.
// How many sticks do you wish to take (1~4)?3
//  3 sticks left in the pile.
// Computer take 2 sticks.
//  1 sticks left in the pile.
// How many sticks do you wish to take (1~1)?2
// How many sticks do you wish to take (1~1)?1
//  You have taken the last sticks.
//  ***You lose!
// Game Over.

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int last = 21,sign=0;
	int q;
	printf("Game begin:\n");
	while(last > 0)
	{
		if(sign % 2 == 0)
		{
			do
			{
				if(last>4)
				    printf("How many sticks do you wish to take (1~4)?");
				else
				printf("How many sticks do you wish to take (1~%d)?",last);
				scanf("%d",&q);
			}while(q>last||q>4);
			last = last - q;
		}
		else 
		{
			q = (last - 1) % 5; 
			printf("Computer take %d sticks.\n",q);
			last = last - q;
		}
		
		if(last==0)
			printf(" You have taken the last sticks.\n ***You lose!\nGame Over." );
		else
		    printf(" %d sticks left in the pile.\n",last);
		sign++;
	}
}