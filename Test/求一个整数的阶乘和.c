#include<stdio.h>
static int fac(int n)
{
	if (n == 1)
		return 1;
	else
		return n * fac(n - 1);//ƽ��ÿһ�����Ľ׳�
}
static int fac_sum(int m)
{
	if (m == 1)
		return 1;
	else
		return fac_sum(m - 1) + fac(m);//����n�����Ľ׳˺�
}
static void print(int number)//��static������������
{
	if (number == 0)
		printf("%d!=%d\n", number, fac(!number));//0�Ľ׳�Ϊ1
	else
		if (number == 1)
			printf("%d!=%d\n", number, fac(number));
		else
			printf("1!...+%d!=%d\n", number, fac_sum(number));
}
void Fac_Num_Sum()
{
	int number;
	printf("��1��һ�����Ľ׳˺�,������һ������(0��1�Ƚ�����):");
	scanf_s("%d", &number);
	print(number);
}
