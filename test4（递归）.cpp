// 4.	在数学上，斐波纳契数列以如下被以递归的方法
//定义：F0=0，F1=1，Fn=F(n-1)+F(n-2)（n=2，n∈N*），
//用文字来说，就是斐波那契数列列由 0 和 1 开始，之后
//的斐波那契数列系数就由之前的两数相加。
//

#include "stdafx.h"


int main()
{
	long Fb(int x);
	int n,resu;
	printf("请输入你想计算的F[n]中的n:");
	scanf_s("%d", &n);
	if (n == 0)
		printf("F(%d)=%d", n, n);
	else
	{
		resu = Fb(n);
		printf("F(%d)=%d\n", n, resu);
		return 0;
	}
}

long Fb(int x)
{
	int end;
	if (x > 2)
		end = Fb(x - 1) + Fb(x - 2);
	else end = 1;
	return end;
}