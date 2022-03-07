#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitSS()
{
	void ShellSort(int* a, int length);
	int a[10000], i, len;
	srand(time(NULL));
	for (i = 0; i < 10000; i++)
		a[i] = rand() % 10000;//产生随机数：10000个1000以内的整数
	len = sizeof(a) / sizeof(a[0]);
	printf("Random number is:\n");
	for (i = 0; i < len; i++)
		printf("%5d", a[i]);//输出随机数
	printf("\n");

	ShellSort(a, len);
	printf("Shell sort is:\n");
	for (i = 0; i < len; i++)
		printf("%5d", a[i]);//输出排序后的数列
	printf("\n");
}
void ShellSort(int* a, int length)
{
	int i, j, h, temp;
	for (h = length / 2; h > 0; h /= 2)//跳转的自增变量，分割为增量为h的子序列
		for (i = h; i < length; i++)//后面待排序的数
		{
			temp = a[i];
			for (j = i - h; j >= 0; j -= h)//前面的有序序列
				if (temp < a[j])
					a[j + h] = a[j];//若前面的有序序列不在大于后面的待排序值时，则不用在继续循环比较break
				else
					break;
			a[j + h] = temp;//给当前元素的下一个元素赋值，因为for循环时最后一次j自减了一次
		}
}//希尔排序:先将待排序序列分为若干子序列,依次对子序列进行直接插入排序,待该序列基本有序则对完整序列整体再进行一次直接插入排序