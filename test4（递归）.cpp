// 4.	����ѧ�ϣ�쳲��������������±��Եݹ�ķ���
//���壺F0=0��F1=1��Fn=F(n-1)+F(n-2)��n=2��n��N*����
//��������˵������쳲������������� 0 �� 1 ��ʼ��֮��
//��쳲���������ϵ������֮ǰ��������ӡ�
//

#include "stdafx.h"


int main()
{
	long Fb(int x);
	int n,resu;
	printf("��������������F[n]�е�n:");
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