#include<stdio.h>
static int fac(int base)//保留的小数位,一定要将该函数用static修饰限制其作用域只在这一文件内
{
	if (base == 1)
		return 10;
	else
		return fac(base - 1) * 10;
}
static float radix_point(float fnum, int base)//四舍五入
{
	fnum = (int)(fnum * fac(base) + 0.5) / (float)fac(base);
	return fnum;
}
void Precision_Realize()
{
	int base;
	float fnum;
	printf("请输入需要四舍五入的浮点数和需要保留的位数:");
	scanf_s("%f%d", &fnum, &base);
	printf("四舍五入保留%d位小数!\n", base);
	printf("利用函数实现四舍五入为:fnum=%f\n", radix_point(fnum, base));
	printf("利用输出格式实现四舍五入为:fnum=%.*f\n", base, radix_point(fnum, base));
}