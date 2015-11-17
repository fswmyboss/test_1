//字符串移位：输入一个字符串s，并输入一
//个整数n，输出字符串s所有字符往右循环移动
//n位的结果，比如，输入hello, world!和3输出
//为ld!hello, wor
#include "stdafx.h"
int main()
{
	void remove(char p[], int num1);
	printf("请输入字符串：");
	char zhi[50];
	gets_s(zhi);
	printf("请输入想移位个数：");
	int num;
	scanf_s("%d", &num);
	printf("经过向右循环后的字符串为：");
	remove(zhi, num);
	printf("%s\n", zhi);
	return 0;
}
void remove(char p[], int num1)
{
	int a = 0;
	char zhi1[50];							//定义一个数组用于储存前面未被移位的字母
	while (p[a] !='\0')
		a = a + 1;
	for (int i = 0; i <= a - num1 - 1; i++)//用for循环将前面未被移位的字母储存在其他数组中
		zhi1[i] = p[i];
	for (int i = 0; i <= num1 - 1; i++)	   //用for循环将被移动的字母放到数组前面
		p[i] = p[a - num1+i];
	for (int i = 0; i <= a - num1 - 1; i++)//用for循环将未被移动的字母补充到数组后面
		p[i + num1] = zhi1[i];
}

