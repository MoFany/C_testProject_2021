#include<stdio.h>
#include<string.h>
void sort_delete(char* str)
{
	char* p, * q, * temp, c;
	for (p = str; *p != '\0'; p++)
	{
		temp = p;//��temp!=p��Ӧ
		for (q = p; *q != '\0'; q++)
			if (*temp > *q)
				temp = q;
		if (temp != p)//ָ�����temp��ָ����pʱִ���������
		{
			c = *temp;
			*temp = *p;
			*p = c;
		}
	}
	for (p = str; *p != '\0'; p++)
	{
		for (q = p; *p == *q; q++)
			;//�����
		strcpy_s(p + 1,800,q);//strcpy()��������ȫ��strcpy_s�滻
	}
	*p = '\0';
}

void Str_Elimin_Dupli()
{
	char str[1000];
	printf("������һ�������Ӣ���ַ���(���Ȳ�Ҫ����800���ַ�):");
	getchar();//����������ǵȴ�����
	gets_s(str,999);
	printf("���ȥ���ظ�Ԫ�غ���ַ���Ϊ:");
	sort_delete(str);
	puts(str);
}
