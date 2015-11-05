// 用递归实现求斐波那契数列的特定位数的值
//

#include "stdafx.h"


int main()
{	
	int F[3] = { 0,1 };					//创建一个只含3个数的数组，并对前两个数赋值
	printf("请输入你计算的Fn中n的值：");
	int num;
	scanf_s("%d", &num);				//输入你想计算的值的位数
	for (int i = 1; i < num; i++)		//求该值需要进行多少次Fn=F(n-1)+F(n-2)
	{
		F[2] = F[1] + F[0];				//进行Fn=F(n-1)+F(n-2)运算
		F[0] = F[1];
		F[1] = F[2];
	}
	printf("F[%d]=%d", num, F[2]);		//输出想要计算的Fn
    return 0;
}

