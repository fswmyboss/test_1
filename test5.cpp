// 实现高精度加法和减法
//

#include "stdafx.h"


int main()
{
	
	void reorder(char num[]);					//将输入的数倒序储存的函数
	void plus(char num1[], char num2[]);		//实现加法运算的函数
	void reduce(char num1[], char num2[]);		//实现减法运算的函数
	char num1[10000], num2[10000];				//用于储存输入计算的数
	char xuanzhe;								//用于储存输入的计算类型
	printf("声明：只能实现正整数的加减，且计算结果不能为负\n");
	printf("请输入你要计算的第一个数：");
	gets_s(num1);
	reorder(num1);
	printf("请输入你要计算的第二个数：");
	gets_s(num2);
	reorder(num2);
	printf("请选择你进行‘+’运算还是减法运算‘-’：");
	scanf_s("%c", &xuanzhe);
	switch (xuanzhe)							//建立选择分支，是进行加法运算还是减法运算
	{
		case'+':plus(num1, num2); break;
		case'-':reduce(num1, num2); break;
	}
	printf("计算结果为：");
	for (int i = 9999; i >= 0; i--)				//用for循环实现对结果的输出
	{
		if (num1[i] >= 0)
			printf("%d", num1[i]);
	}
}
void reorder(char num[])
{
	char a[10000]; int b = 0;
	for (int i = 9999; i >= 0; i--)
	{
		if (num[i] > 0)
		{
			a[b] = num[i];
			b++;
		}
	}
	for (int i = 0; i < 9999; i++)
		num[i] = a[i];
	for (int i = 9999; i >= 0; i--)
	{
		if (num[i] == '-')
			num[i] = num[i + 1];
	}
}
void plus(char num1[], char num2[])
{
	int jinwei = 0;
	for (int i = 0; i <= 9999; i++)
	{
		if (num1[i] > 0 || num2[i] > 0)
		{
			if (num1[i] > 0)
				num1[i] = num1[i] - '0';
			else {
				num1[i] = '0'; num1[i] = num1[i] - '0';
			}
			if (num2[i] > 0)
				num2[i] = num2[i] - '0';
			else {
				num2[i] = '0'; num2[i] = num2[i] - '0';
			}
			num1[i] = num1[i] + num2[i] + jinwei;
			jinwei = num1[i];
			num1[i] = num1[i] % 10;
			jinwei = jinwei / 10;
		}
	}
}
void reduce(char num1[], char num2[])
{
	for (int i = 0; i <= 9999; i++)
	{
		if (num1[i] > 0 || num2[i] > 0)
		{
			if (num1[i] > 0)
				num1[i] = num1[i] - '0';
			else {
				num1[i] = '0'; num1[i] = num1[i] - '0';
			}
			if (num2[i] > 0)
				num2[i] = num2[i] - '0';
			else {
				num2[i] = '0'; num2[i] = num2[i] - '0';
			}
			if (num1[i] >= num2[i])
				num1[i] = num1[i] - num2[i];
			else {
				num1[i] = num1[i] +10 - num2[i];
				num1[i + 1] = num1[i + 1] - 1;

			}
		}
	}
}
