// 代码实现两个矩阵相乘，矩阵的大小和阶数自己定
//

#include "stdafx.h"


int main()
{
	int juzhen1[3][3], juzhen2[3][3];
	int	jieguo[3][3] = { {0,0,0},{0,0,0},{0,0,0} };
	for (int i = 0; i <= 2; i++)						//向第一个矩阵中输入数字
	{
		for (int a = 0; a <= 2; a++)
		{
			printf("juzhen1[%d][%d]=", i, a);
			scanf_s("%d", &juzhen1[i][a]);
		}
	}
	for (int i = 0; i <= 2; i++)						//向第二个矩阵中输入数字
	{
		for (int a = 0; a<= 2; a++)
		{
			printf("juzhen2[%d][%d]=", i, a);
			scanf_s("%d", &juzhen2[i][a]);
		}
	}
	printf("第一个矩阵为：\n");							//输出第一个矩阵
	for (int i = 0; i <= 2; i++)
	{
		for (int a = 0; a <= 2; a++)
		{
			printf("%d\t",juzhen1[i][a]);
			
		}
		printf("\n");
	}
	printf("第二个矩阵为：\n");							//输出第二个矩阵
	for (int i = 0; i <= 2; i++)
	{
		for (int a = 0; a <= 2; a++)
		{
			printf("%d\t", juzhen2[i][a]);

		}
		printf("\n");
	}
	for (int a = 0; a <= 2; a++)					//用3个for循环的嵌套实现两个矩阵的相乘
	{
		for (int b= 0; b <= 2; b++)
		{
			for (int c = 0; c <= 2; c++)
			{
				jieguo[a][b] = juzhen1[a][c] * juzhen2[c][b] + jieguo[a][b];
			}
		}
	}
	printf("两矩阵相乘结果为：\n");					//输出计算结果
	for (int i = 0; i <= 2; i++)
	{
		for (int a = 0; a <= 2; a++)
		{
			printf("%d\t", jieguo[i][a]);

		}
		printf("\n");
	}
    return 0;
}

