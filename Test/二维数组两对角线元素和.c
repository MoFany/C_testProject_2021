#include<stdio.h>
void ArrayValueSum()
{
	int sum = 0, s = 0, i, j;
	int a[5][5];
	printf("����5*5�����ֵ!\n");
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf_s("%d", *(a + i) + j);//��ַ�������ά�����Ԫ��ֵ
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (i == j)//���Խ���
				sum = sum + a[i][j];
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			if (i == j)//�м�Ԫ�ز��ظ�����
				;
			else
				if (i + j == 4)//���Խ���
					s = s + a[i][j];
		}
	printf("5*5���������Խ���֮��Ϊ(�Խ��߽��㲻�ظ�����):%d\n", s + sum);
}

