#include<stdio.h>
extern void Scanf_num(), PasTri(), Array(), Max_PreMin(), ClassMath1(), BinFind(), fun_mumat(), Fun_SS(), ArrayInsert(), InitRS(), InitIS(), InitSS(), IniSelS();
extern void TmTc(), LinkListRealize(), LinkStackRealize(), Recur_Fibo(), LinkQueueRealize(), SqStackRealize(), Realize_Fac_num(), Array_Row_Col(), Sad_Pointer();
extern void ArrayValueSum(), Realize_fac_hanoi(), Arr1_Transposition_Arr2(), Multilevel_Pointer(), InitBS(), Two_Pointer(), Precision_Realize(), Fac_Num_Sum();
extern void Str_Elimin_Dupli(), Str_ISL(), File_Capital_Store(), FileAB_CombineC(), Str_Copy(),Realize_strlen();
int windows_run(float* a)
{
	int num_oj1;
	printf("************************************\n\n");
	printf("1 ���� ************* 2 ������\n\n");
	printf("3 �ļ� ************* 4 ���ؼ�ַ\n\n");
	printf("5 ָ�� ************* 6 �ݹ麯��\n\n");
	printf("7 ���� ************* 8 ���Ա�\n\n");
	printf("***********************************\n\n");
	printf("����Ҫִ�е�ѡ��:");
	scanf_s("%d", &num_oj1);
	putchar(10);
	switch (num_oj1)
	{
	case 1:
	{
		printf("1.0 һά�����ֵ ********* 1.1 ��ά���������Խ���Ԫ�غ�\n");
		printf("1.2 һά�۰���� ********* 1.3 ��ά����ת��(������һ����)\n");
		printf("1.4 ��������˷� ********* 1.5 ��ά�����������\n");
		printf("1.6 ����������� ********* 1.7 ��ά�������л�ת(ת��)\n");
		printf("1.8 �ַ����Ĳ��� ********* 1.9 ��ά�����󰰵�\n\n");//�������������и���Ϊ��Сֵ,�������и���Ϊ����ֵ
		printf("����Ҫִ�е�ѡ��:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 2:
	{
		printf("2.1 ����һ����������������λ��\n");
		printf("2.2 �������������������С������\n");
		printf("2.3 ���ӳ�������\n");
		printf("2.4 ��Ǯ�ټ�����\n");
		printf("2.5 ����ʵ��ʵ������������\n");
		printf("\n����Ҫִ�е�ѡ��:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 3:
	{
		printf("3.1 ��һ���ַ�������ĸתΪ��д����ָ���ļ�\n");
		printf("3.2 ��A��B�ļ��е���Ϣ�ϲ�����뵽C�ļ���\n");
		//printf("");
		//printf("");
		printf("\n����Ҫִ�е�ѡ��:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 4:
	{
		printf("4.1 �༶ָ��֮���ָ���ϵ\n");
		printf("4.2 ���ö���ָ������ַ�������\n");
		//printf("");
		//printf("");
		printf("\n����Ҫִ�е�ѡ��:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 5:
	{
		printf("5.1 ���ַ������ظ�Ԫ��ȥ�������\n");
		printf("5.2 ��ָ���ַ������ַ������Ԫ�غ�\n");
		printf("5.3 ���ַ������Ƹ���һ���ַ���\n");
		printf("5.4 strcat()������ʵ��\n");
		printf("\n����Ҫִ�е�ѡ��:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 6:
	{
		printf("6.1 �ݹ��������Fibonacci����ǰn��\n");
		printf("6.2 �ݹ���a��n�η�,a��n��������\n");//��֧��ָ����Ϊ���������
		printf("6.3 �ݹ���⺺ŵ������\n");
		printf("6.4 �ݹ麯����һ�����Ľ׳˺�\n");
		printf("\n����Ҫִ�е�ѡ��:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 7:
	{
		printf("7.1 ��������(����) *********** 7.2 ϣ������(����)\n");
		printf("7.3 ѡ������(����) *********** 7.4 ð������(����)\n");
		printf("7.5 ��������(����)\n");
		printf("####ÿ���������10000��������!\n");
		printf("\n����Ҫִ�е�ѡ��:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	case 8:
	{
		printf("8.1 ������Ĳ���ʵ��\n");
		printf("8.2 ��ջ�Ĳ���ʵ��\n");
		printf("8.3 ˳��ջ����ɾ��\n");
		printf("8.4 ���ӵĲ���ʵ��\n");
		printf("\n����Ҫִ�е�ѡ��:");
		scanf_s("%f", a);
		putchar(10);
	}break;
	default:printf("�Բ���û�����ѡ��!\n");
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
		default:printf("����ʧ����������!\n");
		}break;
	case 2:
		switch ((int)(a * 10))
		{
		case 21:Scanf_num(); break;
		case 22:Max_PreMin(); break;
		case 23:ClassMath1(); break;
		case 24:TmTc(); break;
		case 25:Precision_Realize(); break;
		default:printf("����ʧ����������!\n");
		}break;
	case 3:
		switch ((int)(a * 10))
		{
		case 31:File_Capital_Store(); break;
		case 32:FileAB_CombineC(); break;
			//case 33:break;
			//case 34:break;
		default:printf("����ʧ����������!\n");
		}break;
	case 4:
		switch ((int)(a * 10))
		{
		case 41:Multilevel_Pointer(); break;
		case 42:Two_Pointer(); break;
			//case 43:break;
			//case 44:break;
		default:printf("����ʧ����������!\n");
		}break;
	case 5:
		switch ((int)(a * 10))
		{
		case 51:Str_Elimin_Dupli(); break;
		case 52:Str_ISL(); break;
		case 53:Str_Copy(); break;
		case 54:Realize_strlen(); break;
		default:printf("����ʧ����������!\n");
		}break;
	case 6:
		switch ((int)(a * 10))
		{
		case 61:Recur_Fibo(); break;
		case 62:Realize_Fac_num(); break;//��֧��ָ����Ϊ���������
		case 63:Realize_fac_hanoi(); break;
		case 64:Fac_Num_Sum(); break;
		default:printf("����ʧ����������!\n");
		}break;
	case 7:
		switch ((int)(a * 10))
		{
		case 71:InitIS(); break;
		case 72:InitSS(); break;
		case 73:IniSelS(); break;
		case 74:InitBS(); break;
		case 75:InitRS(); break;
		default:printf("����ʧ����������!\n");
		}break;
	case 8:
		switch ((int)(a * 10))
		{
		case 81:LinkListRealize(); break;
		case 82:LinkStackRealize(); break;
		case 83:SqStackRealize(); break;
		case 84:LinkQueueRealize(); break;
		default:printf("����ʧ����������!\n");
		}break;
	default:
		printf("����ĵ���ֵ!\n");

	}
	system("pause");
	return 0;
}
