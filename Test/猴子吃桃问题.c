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
	printf("猴子吃桃:每天前一天1/2+1个桃,第一天一共摘多少桃子?\n");
	printf("请输入剩余只有1个桃子所对应的天数:");
	scanf_s("%d", &day);
	printf("第1天一共摘了%d个桃子!\n", funcation(day));
}