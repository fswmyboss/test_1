// ����ʵ������������ˣ�����Ĵ�С�ͽ����Լ���
//

#include "stdafx.h"


int main()
{
	int juzhen1[3][3], juzhen2[3][3];
	int	jieguo[3][3] = { {0,0,0},{0,0,0},{0,0,0} };
	for (int i = 0; i <= 2; i++)						//���һ����������������
	{
		for (int a = 0; a <= 2; a++)
		{
			printf("juzhen1[%d][%d]=", i, a);
			scanf_s("%d", &juzhen1[i][a]);
		}
	}
	for (int i = 0; i <= 2; i++)						//��ڶ�����������������
	{
		for (int a = 0; a<= 2; a++)
		{
			printf("juzhen2[%d][%d]=", i, a);
			scanf_s("%d", &juzhen2[i][a]);
		}
	}
	printf("��һ������Ϊ��\n");							//�����һ������
	for (int i = 0; i <= 2; i++)
	{
		for (int a = 0; a <= 2; a++)
		{
			printf("%d\t",juzhen1[i][a]);
			
		}
		printf("\n");
	}
	printf("�ڶ�������Ϊ��\n");							//����ڶ�������
	for (int i = 0; i <= 2; i++)
	{
		for (int a = 0; a <= 2; a++)
		{
			printf("%d\t", juzhen2[i][a]);

		}
		printf("\n");
	}
	for (int a = 0; a <= 2; a++)					//��3��forѭ����Ƕ��ʵ��������������
	{
		for (int b= 0; b <= 2; b++)
		{
			for (int c = 0; c <= 2; c++)
			{
				jieguo[a][b] = juzhen1[a][c] * juzhen2[c][b] + jieguo[a][b];
			}
		}
	}
	printf("��������˽��Ϊ��\n");					//���������
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

