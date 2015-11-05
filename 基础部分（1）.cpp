//实现输入大写字母转换成小写，输入不为大写字母时判断为错误
//

#include "stdafx.h"


int main()
{
	printf("请输入大写字母：\n");
	char capital;								//创建字符变量，储存输入数
	printf("capital:");
	scanf_s("%c", &capital);
	if (capital<=96&&capital>=65)				//判断输入数是否为大写字母
	{
		capital = capital + 32;					//实现大写字母到小写字母的转换
		printf("lowercase=%c", capital);
	}
	else printf("error\a");						//提示错误输入
    return 0;
}

