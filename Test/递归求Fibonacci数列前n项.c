#include<stdio.h>
unsigned long long int Fibonac(unsigned long long int num)
{
	if (num == 1 || num == 2)
		return 1;
	else
		return Fibonac(num - 1) + Fibonac(num - 2);//���õݹ�������ǰn���ֵΪ,�ݹ�������ѹջ�ķ�ʱ��
}
void Recur_Fibo()
{
	int i;
	unsigned long long int number;
	printf("������Fibonacci���е�����(number,Ϊ��ʡʱ����������С��50):");
	scanf_s("%lld", &number);
	for (i = 1; i <= number; i++)
		printf("Fibonacci���е�%d��Ϊ:%lld\n", i, Fibonac(i));
}
