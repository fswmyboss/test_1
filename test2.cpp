// 输出1000以内的质素，并且使末端对齐


#include "stdafx.h"


int main()
{
	int a[1001],c,d=0;							//创建一个储存质数的数组
	for (int i = 2; i <= 1000; i++)				//i为1000以内的数不含1
	{
		for (int b = 2; b <= i; b++)			//进行判断i是否为质数
		{
			int yushu;
			yushu = i%b;
			c = b;
			if (yushu == 0)
				break;
		}
		if (c == i)								//如果i为质数，将被储存在数组中
		{
			a[d] = i;
			d = d + 1;
		}
	}
	for (int i = 0; a[i]>0; i++)				//用for循环将质数输出
	{
		int f;
		f = i % 12;								//控制输出，每行只有13个数
		if (f == 0)
			printf("\n");
		printf("%d\t", a[i]);

	}
	printf("\n");
    return 0;
}

