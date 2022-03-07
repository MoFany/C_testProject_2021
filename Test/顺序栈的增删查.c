#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define MaxSize 100
typedef int ElemType;

typedef struct stack
{
	ElemType data[MaxSize];
	ElemType top;
}SqStack;

static ElemType InitStack(SqStack* st)
{
	return(st->top = -1);
}

static ElemType Push(SqStack* st, ElemType data)
{
	if (st->top == MaxSize - 1)
	{
		printf("Stack Full!\n");
		return FALSE;
	}
	else
	{
		st->top++;
		st->data[st->top] = data;
		return TRUE;
	}
}

static ElemType Pop(SqStack* st, ElemType data)//ԭ���������������ȳ�,�ϸ���ѭ
{
	if (st->top == -1)
	{
		printf("Stack Empty!\n");
		return FALSE;
	}
	else
		if (st->data[st->top] == data)
		{
			data = st->data[st->top];
			st->top--;
			return TRUE;
		}
		else
		{
			printf("�����ջ˳��!����������\n");
			return FALSE;
		}
}

static void PrintStack(SqStack* st)
{
	SqStack* s = st;
	int i = s->top;
	for (; i >= 0; i--)
		printf("st->data[%d]=%d\n", i, s->data[i]);
}
void SqStackRealize()
{
	int data;
	SqStack* st = (SqStack*)malloc(sizeof(SqStack));//һ��Ҫ����ռ�
	st->top = InitStack(st);
	printf("˳��ջ��ջ,��0��Ϊ���������־!\n");
	scanf_s("%d",&data);
	while (data!=0)
	{
		Push(st, data);
		scanf_s("%d",&data);	
	}
	printf("��ӡջ�е�Ԫ��\n");
	PrintStack(st);
	printf("--------------------\n");
	printf("�������ջ��Ԫ��,��0��Ϊ���������־!\n");
	scanf_s("%d",&data);
	while(data != 0)
	{
		Pop(st, data);
		scanf_s("%d",&data);	
	}
	printf("��ӡ��ջ��ջ��ʣ���Ԫ��!\n");
	PrintStack(st);
}