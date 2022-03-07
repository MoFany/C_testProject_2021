#include<stdio.h>
#include<string.h>
void sort_delete(char* str)
{
	char* p, * q, * temp, c;
	for (p = str; *p != '\0'; p++)
	{
		temp = p;//与temp!=p呼应
		for (q = p; *q != '\0'; q++)
			if (*temp > *q)
				temp = q;
		if (temp != p)//指针变量temp的指向不是p时执行以下语句
		{
			c = *temp;
			*temp = *p;
			*p = c;
		}
	}
	for (p = str; *p != '\0'; p++)
	{
		for (q = p; *p == *q; q++)
			;//空语句
		strcpy_s(p + 1,800,q);//strcpy()函数不安全用strcpy_s替换
	}
	*p = '\0';
}

void Str_Elimin_Dupli()
{
	char str[1000];
	printf("请输入一个任意的英文字符串(长度不要超过800个字符):");
	getchar();//这里的作用是等待输入
	gets_s(str,999);
	printf("输出去除重复元素后的字符串为:");
	sort_delete(str);
	puts(str);
}
