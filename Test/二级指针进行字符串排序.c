#include<stdio.h>
#include<string.h>
//ָ��ʹ�÷�ʽ��, ֻ�ı�ָ�����ƫ���������ı���ָ��
char* max_str(char** p)
{
	int i;
	char* max = *p;
	for (i = 0; i < 4; i++)
		if (strcmp(*(p + i), max) > 0)
			max = *(p + i);
	return max;
}
void Two_Pointer()
{
	char str_arr[4][50];
	char* str[] = { &str_arr[0][0],&str_arr[1][0],&str_arr[2][0],&str_arr[3][0] };//����ָ��Ϊ��Ҫ��ַ
	int i;
	printf("����4��Ӣ���ַ���:\n");
	//fflush(stdin);//fflush()��������������ջ�����Ҫ��Ȼ��һ�ε�gets_s()�����ᱻ����
	getchar();//gets()����ǰ��һ��Ҫ��getchar()������Ϊ�ȴ�����,Ҫ��Ȼ������gtes()�����޷�����
	for (i = 0; i < 4; i++)
	{
		gets_s(str_arr[i],49);
	}
	printf("�����Щ�ַ����е������ַ���!\n");
	printf("����ַ���Ϊ:\n");
	puts(max_str(str));
}