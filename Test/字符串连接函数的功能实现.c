#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize 100
void str_cat(char* str1, char* str2)
{
	int i, j;
	i = j = 0;
	if (MaxSize - strlen(str1) < 5)
	{
		printf("Ҫ���ӵ����ַ����ռ䲻��!\n");
		exit(-1);
	}
	while (str1[i] != '\0')
		i++;
	for (; str2[j] != '\0'; j++)
		str1[i++] = str2[j];
	str1[i] = '\0';
}
void Realize_strlen()
{
	char str1[MaxSize], str2[MaxSize];
	puts("����������str1������(��Ҫ����99���ַ�):");
	getchar();//����ȴ�
	gets_s(str1,99);
	puts("����������str2������(��Ҫ����99���ַ�):");
	gets_s(str2,99);
	puts("������str2���������ӵ�str1!");
	str_cat(str1, str2);
	printf("����str1����������Ϊ:");
	puts(str1);
	printf("����str2������Ϊ:%s\n", str2);
	//ע����scanf()�����й���%sʹ��ʱ��ע������:ֻ����������,�����ÿո����ַ���֮��ķָ���,��Ϊ%s��scanf()������Ĭ���Կո���Ϊ���������־
}