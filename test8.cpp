//ɾ����������ظ��ڵ�
//�������������ݣ�ȱ�㣺ֻ��ɾ���������ظ���㣬�ֿ����ظ�����޷�ɾ��
#include "stdafx.h"
#include<malloc.h>

int main()
{
	struct name											//�����ṹ��
	{
		int age;
		name * next;
	};
	name *head, *previous;
	head = NULL;
	previous = NULL;
	for (int i = 0; i <= 5; i++)						//����������
	{
		name * newname = (name *)malloc(sizeof name);
		newname->next = NULL;
		printf("��������ͣ�");
		scanf_s("%d", &newname->age);
		if (i == 0)
		{
			head = newname;
			previous = newname;
		}
		else
		{
			previous->next = newname;
			previous = newname;
		}

	}
	name * pr = NULL, *ch;
	pr = head;
	
	printf("���ɾ�����ظ��ڵ������");      //���������
	while (true)
	{
		printf("%d  ", pr->age);
		while (pr->age == pr->next->age)		//ɾ���ظ����
		{
			if (pr->next->next != NULL)
			{
				ch = pr->next;
				pr->next = ch->next;
			}
			else
			{
				pr->next = NULL;
				break;
			}
		}
		pr = pr->next;
		if (pr == NULL)
			break;

	}

	return 0;
}