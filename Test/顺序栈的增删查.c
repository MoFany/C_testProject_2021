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

static ElemType Pop(SqStack* st, ElemType data)//原理：先入后出，后入先出,严格遵循
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
			printf("错误出栈顺序!请重新输入\n");
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
	SqStack* st = (SqStack*)malloc(sizeof(SqStack));//一定要分配空间
	st->top = InitStack(st);
	printf("顺序栈入栈,以0作为输入结束标志!\n");
	scanf_s("%d",&data);
	while (data!=0)
	{
		Push(st, data);
		scanf_s("%d",&data);	
	}
	printf("打印栈中的元素\n");
	PrintStack(st);
	printf("--------------------\n");
	printf("请输入出栈的元素,以0作为输入结束标志!\n");
	scanf_s("%d",&data);
	while(data != 0)
	{
		Pop(st, data);
		scanf_s("%d",&data);	
	}
	printf("打印出栈后栈中剩余的元素!\n");
	PrintStack(st);
}