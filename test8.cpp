//删除单链表的重复节点
//可自由输入数据，缺点：只能删除连续的重复结点，分开的重复结点无法删除
#include "stdafx.h"
#include<malloc.h>

int main()
{
	struct name											//创建结构体
	{
		int age;
		name * next;
	};
	name *head, *previous;
	head = NULL;
	previous = NULL;
	for (int i = 0; i <= 5; i++)						//创建单链接
	{
		name * newname = (name *)malloc(sizeof name);
		newname->next = NULL;
		printf("请输入年纪：");
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
	
	printf("输出删除了重复节点的链表：");      //输出单链表
	while (true)
	{
		printf("%d  ", pr->age);
		while (pr->age == pr->next->age)		//删除重复结点
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