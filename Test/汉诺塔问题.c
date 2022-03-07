#include<stdio.h>
void Realize_fac_hanoi()
{
	void hanoi(int n, char one, char two, char three);
	int m;
	printf("盘子的总数为: ");
	scanf_s("%d", &m);
	printf("移动%d个盘子的过程:\n", m);
	hanoi(m, 'A', 'B', 'C');
}

void hanoi(int n, char one, char two, char three)
{
	void move(char x, char y);
	if (n == 1)
		move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}

void move(char x, char y)
{
	printf("%c-->%c\n", x, y);
}
