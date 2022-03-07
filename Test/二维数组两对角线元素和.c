#include<stdio.h>
void ArrayValueSum()
{
	int sum = 0, s = 0, i, j;
	int a[5][5];
	printf("输入5*5矩阵的值!\n");
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf_s("%d", *(a + i) + j);//地址法输入二维数组的元素值
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (i == j)//主对角线
				sum = sum + a[i][j];
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			if (i == j)//中间元素不重复计算
				;
			else
				if (i + j == 4)//副对角线
					s = s + a[i][j];
		}
	printf("5*5矩阵主副对角线之和为(对角线交点不重复计算):%d\n", s + sum);
}

