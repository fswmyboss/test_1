// ʵ�ָ߾��ȼӷ��ͼ���
//

#include "stdafx.h"


int main()
{
	
	void reorder(char num[]);					//������������򴢴�ĺ���
	void plus(char num1[], char num2[]);		//ʵ�ּӷ�����ĺ���
	void reduce(char num1[], char num2[]);		//ʵ�ּ�������ĺ���
	char num1[10000], num2[10000];				//���ڴ�������������
	char xuanzhe;								//���ڴ�������ļ�������
	printf("������ֻ��ʵ���������ļӼ����Ҽ���������Ϊ��\n");
	printf("��������Ҫ����ĵ�һ������");
	gets_s(num1);
	reorder(num1);
	printf("��������Ҫ����ĵڶ�������");
	gets_s(num2);
	reorder(num2);
	printf("��ѡ������С�+�����㻹�Ǽ������㡮-����");
	scanf_s("%c", &xuanzhe);
	switch (xuanzhe)							//����ѡ���֧���ǽ��мӷ����㻹�Ǽ�������
	{
		case'+':plus(num1, num2); break;
		case'-':reduce(num1, num2); break;
	}
	printf("������Ϊ��");
	for (int i = 9999; i >= 0; i--)				//��forѭ��ʵ�ֶԽ�������
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
