#include<stdio.h>
void TmTc()
{
	int money = 100, i, j, k, top = 1;
	printf("��Ǯ�ټ�:100Ԫ��100ֻ��_����(5Ԫ/ֻ)_ĸ��(3Ԫ/ֻ)_С��(1Ԫ/3ֻ)_ÿ�ּ�������һֻ_���򷽰�?\n");
	for (i = 1; i < money / 5; i++)
		for (j = 1; j < 100; j++)
			for (k = 3; k < 100; k += 3)
				if (i * 5 + j * 3 + k / 3 == money && i + j + k == 100)
					printf("100Ԫ��100ֻ������(%d):\n����%dֻ\nĸ��%dֻ\nС��%dֻ\n", top++, i, j, k);
}