#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define MaxSize 1000
static void SwitchStr(char* str)//static�����޶�������������
{
	int i,word=0,count=0;
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == '\040')
			word = 0;
		else
			if (word==0)
			{
				word = 1;
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
				count++;
			}
	printf("���ַ���:%s\n����%d������\n",str,count);
}

static void File_str(char* str)
{
	int i = 0;
	FILE* fp;
	fopen_s(&fp, "text1.txt", "a");//�����ص�ע��fopen()��fopen_s���÷�,ǰ�߷��ش򿪳ɹ�����ļ���Ϣ���ĵ�ַ����fopen_s()��ȷ���ļ�����0,���򷵻ط�0
	if (fp == NULL)
	{
		printf("fpָ��ָ���ļ�����!\n");
		exit(-1);
	}
	while (str[i] != '\0' && str[i] != '!')
	{
		fputc(str[i], fp);
		i++;
	}
	if (fclose(fp) == 0)
		printf("�ɹ��ر��ļ�!\n");
	else
		printf("�ļ��ر�ʧ��!\n");
}

void File_Capital_Store()
{
	char array[MaxSize];
	printf("������һ��Ӣ��(��Ҫ����999���ַ�):");
	getchar();//�ȴ�����
	gets_s(array,999);
	printf("���ַ����е�����Сд��ĸתΪ��д���!\n");
	SwitchStr(array);
	//puts(array);
	printf("�����ַ�������ָ���ļ�!\n");
	File_str(array);
}
