#include<stdio.h>
void ArrayInsert()
{
	void Insert(int a[], int n, int b);
	int a[11] = { 1,2,3,4,5,6,7,8,9,10 }, b, n, i;
	printf("一维数组插入一个值其余元素整体后移!\n");
	printf("输出原始数组a[0]==NULL==0:\n");
	for (i = 0; i < 11; i++)
		printf("a[%d]=%d\n",i,a[i]);//最后一个a[10]值0代表空NULL
	printf("请输入插入值(b)和插入位置(n):");
	scanf_s("%d%d", &b, &n);
	if (n - 1 >= 0 && n - 1 < 11)
	{
		Insert(a, n, b);
		for (i = 0; i < 11; i++)
			printf("a[%d]=%d\n", i, a[i]);
	}
	else
		printf("错误:无法进行插入!\n");
}
void Insert(int a[], int n, int b)
{
	int temp_1, temp_2, i;
	temp_2 = a[n - 1];
	a[n - 1] = b;
	for (i = n; i < 11; i++)
	{
		temp_1 = temp_2;
		temp_2 = a[i];
		a[i] = temp_1;
	}
}