#include<stdio.h>
#include<string.h>
#define Maxsize1 100
#define Maxsize2 200
void Str_Copy()
{
	char a[Maxsize1],*t=a , b[Maxsize2], * s = b;
	printf("请输入一个字符串(t):\n");
	getchar();//等待输入
	gets_s(t, 99);
	printf("将字符串(t)复制给字符串(s):\n");
	while (*s++ = *t++);		//--------------------------等价于while((*s++=*t++)!='\0');<==>while((*s++=*t++)!=0);<==>while(*s);---当*s为0时跳出循环
	s = b;//一定记得让指针变量从头开始*/
	printf("字符串(s)为:%s\n", s);
	printf("指针变量(s)指向的字符数组(b)为:%s\n", b);
}