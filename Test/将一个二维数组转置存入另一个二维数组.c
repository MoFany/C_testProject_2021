#include<stdio.h>
void Arr1_Transposition_Arr2()
{
	void array_transpose(int array[][3]);
	int a[3][3], i, j;
	printf("���ʼ��3*3��ԭʼ��ά����:\n");
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
			b[j][i] = array[i][j];//����ת�ã����л���
	printf("����ת��,���ת�ô����������:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}