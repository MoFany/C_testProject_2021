#include<stdio.h>
void TmTc()
{
	int money = 100, i, j, k, top = 1;
	printf("百钱百鸡:100元买100只鸡_公鸡(5元/只)_母鸡(3元/只)_小鸡(1元/3只)_每种鸡至少买一只_求购买方案?\n");
	for (i = 1; i < money / 5; i++)
		for (j = 1; j < 100; j++)
			for (k = 3; k < 100; k += 3)
				if (i * 5 + j * 3 + k / 3 == money && i + j + k == 100)
					printf("100元买100只鸡方案(%d):\n公鸡%d只\n母鸡%d只\n小鸡%d只\n", top++, i, j, k);
}