// ���1000���ڵ����أ�����ʹĩ�˶���


#include "stdafx.h"


int main()
{
	int a[1001],c,d=0;							//����һ����������������
	for (int i = 2; i <= 1000; i++)				//iΪ1000���ڵ�������1
	{
		for (int b = 2; b <= i; b++)			//�����ж�i�Ƿ�Ϊ����
		{
			int yushu;
			yushu = i%b;
			c = b;
			if (yushu == 0)
				break;
		}
		if (c == i)								//���iΪ����������������������
		{
			a[d] = i;
			d = d + 1;
		}
	}
	for (int i = 0; a[i]>0; i++)				//��forѭ�����������
	{
		int f;
		f = i % 12;								//���������ÿ��ֻ��13����
		if (f == 0)
			printf("\n");
		printf("%d\t", a[i]);

	}
	printf("\n");
    return 0;
}

