#include<stdio.h>
unsigned long long int Fibonac(unsigned long long int num)
{
	if (num == 1 || num == 2)
		return 1;
	else
		return Fibonac(num - 1) + Fibonac(num - 2);//利用递归求数列前n项的值为,递归利用了压栈的费时间
}
void Recur_Fibo()
{
	int i;
	unsigned long long int number;
	printf("请输入Fibonacci数列的项数(number,为节省时间项数尽量小于50):");
	scanf_s("%lld", &number);
	for (i = 1; i <= number; i++)
		printf("Fibonacci数列第%d项为:%lld\n", i, Fibonac(i));
}
