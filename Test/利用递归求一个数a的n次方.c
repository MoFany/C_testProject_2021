#include<stdio.h>
#include<stdlib.h>
int fac(int a, int n)
{
	if (n == 0)
		return 1;
	else
		if (n > 0)
			return fac(a, n - 1) * a;//�޸���2021��8��20��
		else
		{
			printf("�˳���֧��ָ��Ϊ���������!\n");
			exit(1);
		}
}
void Realize_Fac_num()
{
	int n, a;
	printf("����a^n�ĸ�ʽ����a��n:");
	scanf_s("%d%d", &a, &n);
	printf("�ݹ麯������!���Ϊ:\n");
	printf("%d^%d=%d\n", a, n,fac(a, n));
}