#include<stdio.h>
#include<string.h>
#define Maxsize1 100
#define Maxsize2 200
void Str_Copy()
{
	char a[Maxsize1],*t=a , b[Maxsize2], * s = b;
	printf("������һ���ַ���(t):\n");
	getchar();//�ȴ�����
	gets_s(t, 99);
	printf("���ַ���(t)���Ƹ��ַ���(s):\n");
	while (*s++ = *t++);		//--------------------------�ȼ���while((*s++=*t++)!='\0');<==>while((*s++=*t++)!=0);<==>while(*s);---��*sΪ0ʱ����ѭ��
	s = b;//һ���ǵ���ָ�������ͷ��ʼ*/
	printf("�ַ���(s)Ϊ:%s\n", s);
	printf("ָ�����(s)ָ����ַ�����(b)Ϊ:%s\n", b);
}