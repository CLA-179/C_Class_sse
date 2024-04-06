// 输入2个学生5门课的成绩，分别用函数求：（1）每个学生的平均分；（2）每门课的平均分；（3）找出最高的分数所对应的学生和课程；（4）求出各同学的平均分方差：

// (1/n)(∑xi2) - （（∑xi）/ n）2

//  输入格式和提示信息：

// "\n输入学生%4d的5个成绩：\n"

// "%f"

// 输出格式和提示信息：

// "\n 序号     课程1     2     3     4     5     平均分\n"

// "\n NO%2d"

// "%8.2f"



// "\n课平均"

// "%8.2f"



// "\n\n最高分%8.2f是%d号学生的第%d门课\n"

// "\n方差 %8.2f"        

// ¶
// 输入学生˽˽˽1的5个成绩：¶
// ¶
// 输入学生˽˽˽2的5个成绩：¶
// ¶
// ˽序号˽˽˽˽˽课程1˽˽˽˽˽2˽˽˽˽˽3˽˽˽˽˽4˽˽˽˽˽5˽˽˽˽˽平均分¶
// ¶
// ˽NO˽1˽˽˽89.00˽˽˽96.00˽˽˽88.00˽˽˽90.00˽˽˽76.00˽˽˽87.80¶
// ˽NO˽2˽˽˽66.00˽˽˽89.00˽˽˽87.00˽˽˽85.00˽˽˽67.00˽˽˽78.80¶
// 课平均˽˽˽77.50˽˽˽92.50˽˽˽87.50˽˽˽87.50˽˽˽71.50¶
// ¶
// 最高分˽˽˽96.00是1号学生的第2门课¶
// ¶
// 方差˽˽˽˽20.25

#include <stdio.h>
#include <math.h>
//每个学生平均分；
void Average_Students(double a[2][5],double aver[2])
{    
	
	int i, j;
    printf("\n 序号     课程1     2     3     4     5     平均分\n");
	for (i = 0; i < 2; i++)
	{
		//第i+1个同学
        printf("\n NO%2d",i + 1);
		double c;
		double b = 0;
		for (j = 0; j < 5; j++)
		{//第i+1个同学的成绩平均分
            printf("%8.2f",a[i][j]);
			b += a[i][j];
			aver[i] = b / 5.00;
		}
		printf("%8.2f", aver[i]);
	}
	
}
//每门课的平均分；
void Average_Class(double a[2][5]) 
{    
	int i, j;
    printf("\n课平均");
	for (j = 0; j < 5; j++) {//这里a【i】【j】，j循环放在最外面
		double c;
		double b = 0;
		for (i = 0; i < 2; i++)
		{
			b += a[i][j];
			c = b / 2;
			//printf("%d\t", a[i][j]);     这里可以看下输出的分数列的数据
		}
		printf("%8.2f",c);
	}
}
//所有分数中最高分；
void Max_Point(double a[2][5]) 
{   
    double max = a[0][0];
    int _i = 1, _j = 1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                _i = i + 1;
                _j = j + 1;
            }
            
        }
        
    }
    printf("\n\n最高分%8.2f是%d号学生的第%d门课\n", max, _i, _j);
}
void Variance(double aver[2])
{
    double aver_aver = (aver[0] + aver[1]) / 2;
    double variance = (pow(aver[0],2) + pow(aver[1],2)) / 2 - pow(aver_aver,2);
    printf("\n方差 %8.2f",variance);
}
int main()
{
	double a[2][5],aver[2];
	int i, j;
	for (i = 0; i < 2; i++)
	{
		printf("\n输入学生%4d的5个成绩：\n", i + 1);
		for (j = 0; j < 5; j++)
		{
			scanf("%lf", &a[i][j]);
		}
	}
	
	Average_Students(a,aver);
	Average_Class(a);
	Max_Point(a);
    Variance(aver);
    return 0;
}

