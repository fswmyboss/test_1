// ��3,7,5,18,15,6,20�������飬��˳�����
//

#include "stdafx.h"


int main()
{
	int num[7] = { 3,7,5,18,15,6,20 };				//��ԭʼ���ݴ�����num�����в����
	printf("ԭʼ˳��Ϊ��");										
	for (int i = 0; i <= 6; i++)					//��ʼ��ð���㷨��������
		printf("\t%d", num[i]);
	for (int i = 0; i <= 5; i++)
	{
		for (int x = 6; x > i; x--)
		{
			if (num[x]<=num[x - 1])
			{
				num[x - 1] = num[x - 1] - num[x];	//���ò�ֵ����Сֵ���л���
				num[x] = num[x] + num[x - 1];
				num[x - 1] = num[x] - num[x - 1];
			}
		}
	}
	printf("\n���к��˳��Ϊ��");					//�������������
	for (int i = 0; i <= 6; i++)
		printf("\t%d", num[i]);
	printf("\n");
    return 0;
}

