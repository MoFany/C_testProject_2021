#include<stdio.h>
#include<string.h>
#define MaxSize 100
void SwitchStr(char* str)
{
	int i, num = 0, word = 0;
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == '\040')//空格为0
			word = 0;
		else
			if (word == 0)
			{
				word = 1;//单词为1
				num++;//num可以统计出现的单词数量
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
			}
}

void Fun_SS()
{
	char array[MaxSize];
	printf("输入一句英文字符串将首字母转换为大写!\n");
	printf("请输入一句英文:");
	getchar();//gets()函数前面一定要加getchar()函数意为等待输入,要不然会跳过gtes()函数无法输入
	//fflush(stdin);//fflush()函数的作用是清空缓冲区要不然第一次的gets_s()函数会被跳过
	gets_s(array,99);
	printf("将每个单词的首字母转为大写输出:");
	SwitchStr(array);
	puts(array);
}
