//ʵ�������д��ĸת����Сд�����벻Ϊ��д��ĸʱ�ж�Ϊ����
//

#include "stdafx.h"


int main()
{
	printf("�������д��ĸ��\n");
	char capital;								//�����ַ�����������������
	printf("capital:");
	scanf_s("%c", &capital);
	if (capital<=96&&capital>=65)				//�ж��������Ƿ�Ϊ��д��ĸ
	{
		capital = capital + 32;					//ʵ�ִ�д��ĸ��Сд��ĸ��ת��
		printf("lowercase=%c", capital);
	}
	else printf("error\a");						//��ʾ��������
    return 0;
}

