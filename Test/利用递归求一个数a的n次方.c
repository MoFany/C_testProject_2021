#include<stdio.h>
#include<stdlib.h>
int fac(int a, int n)
{
	if (n == 0)
		return 1;
	else
		if (n > 0)
			return fac(a, n - 1) * a;//修改于2021年8月20日
		else
		{
			printf("此程序不支持指数为负数的情况!\n");
			exit(1);
		}
}
void Realize_Fac_num()
{
	int n, a;
	printf("请以a^n的格式输入a与n:");
	scanf_s("%d%d", &a, &n);
	printf("递归函数调用!结果为:\n");
	printf("%d^%d=%d\n", a, n,fac(a, n));
}