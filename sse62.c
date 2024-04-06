// 程序模拟简单运算器的工作：输入一个算式（没有空格），遇等号'='说明输入结束，输出结果。假设计算器只能进行加、减、乘、除运算，
// 运算数和结果都是整数，4种运算符的优先级相同，按从左到右的顺序计算。例如输入"1+2*10-10/2="后，输出10。
// **输出格式要求："%d" 出错提示信息："错误的运算符：%c"
// 程序运行示例如下：
// 1+2*10-10/2=    <===此行为输入
// 10              <===此行为输出

#include <stdio.h>
int main()
{
	int i,sum,isnan=0;
	char op='0';
	scanf("%d",&sum);
	while(op!='=')
	{
		scanf("%c",&op);
		if(op=='=')
			break;
		
		scanf("%d",&i);
		if(op=='+')
			sum=sum+i;
		else if(op=='-')
			sum=sum-i;
		else if(op=='*')
			sum=sum*i;
		else if(op=='/'){
			if(i!=0)
				sum=sum/i;
			else
				
				isnan=1;
		}
		else{
			printf("错误的运算符：%c",op);
            isnan = 2;
            break;
        }
	}
	if(isnan==1)
		printf("ERROR");
	else if (isnan == 0)
		printf("%d\n",sum);	
	return 0;
	
}

