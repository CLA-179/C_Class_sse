// 一辆卡车违反了交通规则，撞人后逃逸。现场有三人目击该事件，但都没有记住车号，只记住车号的一些特征。
// 甲说：车号的前两位数字是相同的；
// 乙说：车号的后两位数字是相同的，但与前两位不同；
// 丙是位数学家，他说：4位的车号正好是一个整数的平方。
// 请根据以上线索编程协助警方找出车号，以便尽快破案，抓住交通肇事犯。
// **输出格式要求："k=%d, m=%d\n" (k为车号，k=m*m)

#include<stdio.h>
int main() 
{
	int i,j,m,k;
	for(i=0;i<=9;i++)//前两个数 
	{
		for(j=0;j<=9;j++)//后两个数 
		{
			if(j!=i)//这两个数不相等 
			{
				k=1000*i+100*i+j*10+j;//一个整数的平方 
				for(m=3;m*m<=k;m++)	
				{
					if(m*m==k)
					{
						printf("k=%d, m=%d\n",k,m);
					}
				}
			}	
		}	
	}
    return 0; 
}