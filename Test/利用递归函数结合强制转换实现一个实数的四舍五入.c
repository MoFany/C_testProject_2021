#include<stdio.h>
static int fac(int base)//������С��λ,һ��Ҫ���ú�����static����������������ֻ����һ�ļ���
{
	if (base == 1)
		return 10;
	else
		return fac(base - 1) * 10;
}
static float radix_point(float fnum, int base)//��������
{
	fnum = (int)(fnum * fac(base) + 0.5) / (float)fac(base);
	return fnum;
}
void Precision_Realize()
{
	int base;
	float fnum;
	printf("��������Ҫ��������ĸ���������Ҫ������λ��:");
	scanf_s("%f%d", &fnum, &base);
	printf("�������뱣��%dλС��!\n", base);
	printf("���ú���ʵ����������Ϊ:fnum=%f\n", radix_point(fnum, base));
	printf("���������ʽʵ����������Ϊ:fnum=%.*f\n", base, radix_point(fnum, base));
}