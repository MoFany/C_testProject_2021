#include<stdio.h>
#include<string.h>
//指针使用方式二, 只改变指针变量偏移量而不改变其指向
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
	char* str[] = { &str_arr[0][0],&str_arr[1][0],&str_arr[2][0],&str_arr[3][0] };//以行指针为主要地址
	int i;
	printf("输入4个英文字符串:\n");
	//fflush(stdin);//fflush()函数的作用是清空缓冲区要不然第一次的gets_s()函数会被跳过
	getchar();//gets()函数前面一定要加getchar()函数意为等待输入,要不然会跳过gtes()函数无法输入
	for (i = 0; i < 4; i++)
	{
		gets_s(str_arr[i],49);
	}
	printf("输出这些字符串中的最大的字符串!\n");
	printf("最大字符串为:\n");
	puts(max_str(str));
}