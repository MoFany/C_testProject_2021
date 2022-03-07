#include<stdio.h>
#include<string.h>
#define MaxSize 1000
void str_insert(char* str, char element)
{
	int i, j, max, temp1, temp2;
	max = str[0];
	for (i = j = 0; str[i] != '\0'; i++)
		if (max < str[i])
		{
			j = i;
			max = str[i];
		}
	temp2 = element;
	for (i = j + 1; temp2 != '\0'; i++)
	{
		temp1 = str[i];
		str[i] = temp2;
		temp2 = temp1;
	}
	str[i] = '\0';//最后一次temp2中的值是一个'\0'字符串结束标志
}
void Str_ISL()
{
	char str[MaxSize], elem;
	printf("请输入一个字符串(长度不超过999个字符):");
	getchar();//输入等待
	gets_s(str,999);
	printf("str字符串的初始值为:");
	puts(str);
	printf("请输入一个要插入的字符元素(element):");
	elem = getchar();
	printf("将%c字符插入到str字符串中最大元素的后面!\n");
	str_insert(str, elem);
	printf("现在str字符串的值为:");
	puts(str);
}