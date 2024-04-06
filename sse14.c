// 矩阵乘法。编写一个C函数实现M行K列矩阵与K行N列的矩阵的乘积。设A为M行K列的矩阵，B为K行N列的矩阵，则C=A×B的积为M行N列的矩阵。
// 矩阵乘法的规则是：设A[m,k]，B[k,n]，则C[m,n]=A[m,k]×B[k,n]，其中：
// C[i,j]=∑kl=1A[i,l]×B[l,j], (i=1,2,…,m   j=1,2,…,n)
// **输出格式要求："\t%d" "array A=\n" "array B=\n" "array C=\n"
// 程序运行示例如下：
// array A=
// 	1	2	3
// 	4	5	6
// array B=
// 	1	1
// 	0	2
// 	2	0
// array C=
// 	7	5
// 	16	14


#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2]={{1,1},{0,2},{2,0}};
	int c[2][2]={0};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<3;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	printf("array A=\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("array B=\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	
	printf("array C=\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
    return 0;
}