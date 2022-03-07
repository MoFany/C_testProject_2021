#include<stdio.h>
extern void Scanf_num(), PasTri(), Array(), Max_PreMin(), ClassMath1(), BinFind(), fun_mumat(), Fun_SS(), ArrayInsert(), InitRS(), InitIS(), InitSS(), IniSelS();
extern void TmTc(), LinkListRealize(), LinkStackRealize(), Recur_Fibo(), LinkQueueRealize(), SqStackRealize(), Realize_Fac_num(), Array_Row_Col(), Sad_Pointer();
extern void ArrayValueSum(), Realize_fac_hanoi(), Arr1_Transposition_Arr2(), Multilevel_Pointer(), InitBS(), Two_Pointer(), Precision_Realize(), Fac_Num_Sum();
extern void Str_Elimin_Dupli(), Str_ISL(), File_Capital_Store(), FileAB_CombineC(), Str_Copy(),Realize_strlen();
int windows_run(float* a)
{
	int num_oj1;
	printf("************************************\n\n");
	printf("1 数组 ************* 2 简单数字\n\n");
	printf("3 文件 ************* 4 多重间址\n\n");
	printf("5 指针 ************* 6 递归函数\n\n");
	printf("7 排序 ************* 8 线性表\n\n");
	printf("***********************************\n\n");
	printf("输入要执行的选项:");
	scanf_s("%d", &num_oj1);
	putchar(10);
	switch (num_oj1)
	{
	case 1:
	{
		printf("1.0 一维数组插值 ********* 1.1 二维数组求两对角线元素和\n");
		printf("1.2 一维折半查找 ********* 1.3 二维数组转置(存入另一数组)\n");
		printf("1.4 矩阵数组乘法 ********* 1.5 二维数组逆序输出\n");
		printf("1.6 杨辉三角数组 ********* 1.7 二维数组行列互转(转置)\n");
		printf("1.8 字符串的操作 ********* 1.9 二维数组求鞍点\n\n");//鞍点是所在行中该数为极小值,所在列中该数为极大值
		printf("输入要执行的选项:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 2:
	{
		printf("2.1 输入一个数逆序输出并输出位数\n");
		printf("2.2 求两数的最大公因数与最小公倍数\n");
		printf("2.3 猴子吃桃问题\n");
		printf("2.4 百钱百鸡问题\n");
		printf("2.5 函数实现实数的四舍五入\n");
		printf("\n输入要执行的选项:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 3:
	{
		printf("3.1 将一个字符串首字母转为大写存入指定文件\n");
		printf("3.2 将A与B文件中的信息合并后存入到C文件中\n");
		//printf("");
		//printf("");
		printf("\n输入要执行的选项:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 4:
	{
		printf("4.1 多级指针之间的指针关系\n");
		printf("4.2 利用二级指针进行字符串排序\n");
		//printf("");
		//printf("");
		printf("\n输入要执行的选项:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 5:
	{
		printf("5.1 将字符串中重复元素去除后输出\n");
		printf("5.2 将指定字符插入字符串最大元素后\n");
		printf("5.3 将字符串复制给另一个字符串\n");
		printf("5.4 strcat()函数的实现\n");
		printf("\n输入要执行的选项:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 6:
	{
		printf("6.1 递归依次输出Fibonacci数列前n项\n");
		printf("6.2 递归求a的n次方,a与n键盘输入\n");//仅支持指数不为负数的情况
		printf("6.3 递归求解汉诺塔问题\n");
		printf("6.4 递归函数求到一个数的阶乘和\n");
		printf("\n输入要执行的选项:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 7:
	{
		printf("7.1 插入排序(升序) *********** 7.2 希尔排序(升序)\n");
		printf("7.3 选择排序(降序) *********** 7.4 冒泡排序(降序)\n");
		printf("7.5 基数排序(升序)\n");
		printf("####每次随机生成10000个数排序!\n");
		printf("\n输入要执行的选项:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 8:
	{
		printf("8.1 单链表的操作实现\n");
		printf("8.2 链栈的操作实现\n");
		printf("8.3 顺序栈的增删查\n");
		printf("8.4 链队的操作实现\n");
		printf("\n输入要执行的选项:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	default:printf("对不起没有这个选项!\n");
	}
	return num_oj1;
}
int main()
{
	int n;
	float a;
	switch (n = windows_run(&a))
	{
	case 1:
		switch ((int)(a * 10))
		{
		case 10:ArrayInsert(); break;
		case 11:ArrayValueSum(); break;
		case 12:BinFind(); break;
		case 13:Arr1_Transposition_Arr2(); break;
		case 14:fun_mumat(); break;
		case 15:Array(); break;
		case 16:PasTri(); break;
		case 17:Array_Row_Col(); break;
		case 18:Fun_SS(); break;
		case 19:Sad_Pointer(); break;
		default:printf("调用失败请检查输入!\n");
		}break;
	case 2:
		switch ((int)(a * 10))
		{
		case 21:Scanf_num(); break;
		case 22:Max_PreMin(); break;
		case 23:ClassMath1(); break;
		case 24:TmTc(); break;
		case 25:Precision_Realize(); break;
		default:printf("调用失败请检查输入!\n");
		}break;
	case 3:
		switch ((int)(a * 10))
		{
		case 31:File_Capital_Store(); break;
		case 32:FileAB_CombineC(); break;
			//case 33:break;
			//case 34:break;
		default:printf("调用失败请检查输入!\n");
		}break;
	case 4:
		switch ((int)(a * 10))
		{
		case 41:Multilevel_Pointer(); break;
		case 42:Two_Pointer(); break;
			//case 43:break;
			//case 44:break;
		default:printf("调用失败请检查输入!\n");
		}break;
	case 5:
		switch ((int)(a * 10))
		{
		case 51:Str_Elimin_Dupli(); break;
		case 52:Str_ISL(); break;
		case 53:Str_Copy(); break;
		case 54:Realize_strlen(); break;
		default:printf("调用失败请检查输入!\n");
		}break;
	case 6:
		switch ((int)(a * 10))
		{
		case 61:Recur_Fibo(); break;
		case 62:Realize_Fac_num(); break;//仅支持指数不为负数的情况
		case 63:Realize_fac_hanoi(); break;
		case 64:Fac_Num_Sum(); break;
		default:printf("调用失败请检查输入!\n");
		}break;
	case 7:
		switch ((int)(a * 10))
		{
		case 71:InitIS(); break;
		case 72:InitSS(); break;
		case 73:IniSelS(); break;
		case 74:InitBS(); break;
		case 75:InitRS(); break;
		default:printf("调用失败请检查输入!\n");
		}break;
	case 8:
		switch ((int)(a * 10))
		{
		case 81:LinkListRealize(); break;
		case 82:LinkStackRealize(); break;
		case 83:SqStackRealize(); break;
		case 84:LinkQueueRealize(); break;
		default:printf("调用失败请检查输入!\n");
		}break;
	default:
		printf("错误的调用值!\n");

	}
	system("pause");
	return 0;
}
