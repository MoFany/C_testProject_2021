#include<stdio.h>
int funcation(int day)
{
	int temp = 1;
	for (; day > 0; day--)
		temp = (temp + 1) * 2;
	return temp;
}
void ClassMath1()
{
	int day;
	printf("���ӳ���:ÿ��ǰһ��1/2+1����,��һ��һ��ժ��������?\n");
	printf("������ʣ��ֻ��1����������Ӧ������:");
	scanf_s("%d", &day);
	printf("��1��һ��ժ��%d������!\n", funcation(day));
}