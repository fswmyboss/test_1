//�ַ�����λ������һ���ַ���s��������һ
//������n������ַ���s�����ַ�����ѭ���ƶ�
//nλ�Ľ�������磬����hello, world!��3���
//Ϊld!hello, wor
#include "stdafx.h"
int main()
{
	void remove(char p[], int num1);
	printf("�������ַ�����");
	char zhi[50];
	gets_s(zhi);
	printf("����������λ������");
	int num;
	scanf_s("%d", &num);
	printf("��������ѭ������ַ���Ϊ��");
	remove(zhi, num);
	printf("%s\n", zhi);
	return 0;
}
void remove(char p[], int num1)
{
	int a = 0;
	char zhi1[50];							//����һ���������ڴ���ǰ��δ����λ����ĸ
	while (p[a] !='\0')
		a = a + 1;
	for (int i = 0; i <= a - num1 - 1; i++)//��forѭ����ǰ��δ����λ����ĸ����������������
		zhi1[i] = p[i];
	for (int i = 0; i <= num1 - 1; i++)	   //��forѭ�������ƶ�����ĸ�ŵ�����ǰ��
		p[i] = p[a - num1+i];
	for (int i = 0; i <= a - num1 - 1; i++)//��forѭ����δ���ƶ�����ĸ���䵽�������
		p[i + num1] = zhi1[i];
}

