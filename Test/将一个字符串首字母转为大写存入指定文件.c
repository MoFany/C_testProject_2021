#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define MaxSize 1000
static void SwitchStr(char* str)//static用于限定函数的作用域
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
	printf("该字符串:%s\n共有%d个单词\n",str,count);
}

static void File_str(char* str)
{
	int i = 0;
	FILE* fp;
	fopen_s(&fp, "text1.txt", "a");//这里重点注意fopen()与fopen_s的用法,前者返回打开成功后的文件信息区的地址后者fopen_s()正确打开文件返回0,否则返回非0
	if (fp == NULL)
	{
		printf("fp指针指向文件出错!\n");
		exit(-1);
	}
	while (str[i] != '\0' && str[i] != '!')
	{
		fputc(str[i], fp);
		i++;
	}
	if (fclose(fp) == 0)
		printf("成功关闭文件!\n");
	else
		printf("文件关闭失败!\n");
}

void File_Capital_Store()
{
	char array[MaxSize];
	printf("请输入一句英文(不要超过999个字符):");
	getchar();//等待输入
	gets_s(array,999);
	printf("将字符串中的所有小写字母转为大写输出!\n");
	SwitchStr(array);
	//puts(array);
	printf("将该字符串存入指定文件!\n");
	File_str(array);
}
