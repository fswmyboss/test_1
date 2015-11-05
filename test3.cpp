// 将3,7,5,18,15,6,20存入数组，并顺序输出
//

#include "stdafx.h"


int main()
{
	int num[7] = { 3,7,5,18,15,6,20 };				//将原始数据储存在num数组中并输出
	printf("原始顺序为：");										
	for (int i = 0; i <= 6; i++)					//开始用冒泡算法进行排序
		printf("\t%d", num[i]);
	for (int i = 0; i <= 5; i++)
	{
		for (int x = 6; x > i; x--)
		{
			if (num[x]<=num[x - 1])
			{
				num[x - 1] = num[x - 1] - num[x];	//利用差值将大小值进行互换
				num[x] = num[x] + num[x - 1];
				num[x - 1] = num[x] - num[x - 1];
			}
		}
	}
	printf("\n排列后的顺序为：");					//将排序后的数输出
	for (int i = 0; i <= 6; i++)
		printf("\t%d", num[i]);
	printf("\n");
    return 0;
}

