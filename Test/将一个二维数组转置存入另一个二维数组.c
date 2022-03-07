#include<stdio.h>
void Arr1_Transposition_Arr2()
{
	void array_transpose(int array[][3]);
	int a[3][3], i, j;
	printf("请初始化3*3的原始二维数组:\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf_s("%d", &a[i][j]);
	printf("");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	array_transpose(a);
}
void array_transpose(int array[][3])
{
	int i, j, b[3][3];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			b[j][i] = array[i][j];//数组转置，行列互换
	printf("数组转置,输出转置存入的新数组:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}