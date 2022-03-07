#include<stdio.h>
#include<stdlib.h>
//#define TRUE 1
//#define FALSE 0
typedef int ElemType;
typedef struct stack
{
	ElemType data;
	struct stack* next;
}LinkStack;

LinkStack* InitStack()
{
	LinkStack* lst;
	lst = NULL;
	return lst;
}

LinkStack* Push(LinkStack* lst, ElemType data)
{
	LinkStack* ls;
	ls = (LinkStack*)malloc(sizeof(LinkStack));
	ls->data = data;
	ls->next = lst;
	lst = ls;
	return lst;
}

LinkStack* Pop(LinkStack* lst, ElemType data)//原理：先入后出，后入先出,严格遵循
{
	LinkStack* ls = lst;
	if (lst == NULL)
	{
		printf("链栈为空!\n");
		return lst;
	}
	else
		if (ls->data == data)
		{
			data = ls->data;
			lst = ls->next;
			free(ls);
			return lst;
		}
		else
		{
			printf("错误的出栈顺序!请重新输入!\n");//不依照原理出栈，会报错提示
			return lst;
		}
}

void PrintStack(LinkStack* lst)
{
	LinkStack* ls = lst;
	if (ls == NULL)
	{
		printf("链栈为空!\n");
		return;
	}
	while (ls != NULL)
	{
		printf("LinkStack->data=%d\n", ls->data);
		ls = ls->next;
	}
}

LinkStack* Destroy(LinkStack* lst)
{
	LinkStack* preceding = lst, * p;
	if (preceding == NULL)
	{
		printf("链栈为空!\n");
		return preceding;
	}
	p = preceding->next;
	while (p != NULL)
	{
		free(preceding);
		preceding = p;
		p = p->next;
	}
	free(preceding);
	if (p == NULL)
		printf("链栈成功销毁!\n");
	return p;
}

void LinkStackRealize()
{
	int data;
	LinkStack* st = InitStack();
	printf("请依次入栈元素,以0做为输入结束标志:\n");
	scanf_s("%d", &data);
	while (data!=0)
	{
		st = Push(st, data);
		scanf_s("%d",&data);	
	}
	printf("打印入栈后的栈中元素!\n");
	PrintStack(st);
	printf("----------------\n");
	printf("请正确输入出栈元素,以0作为输入结束标志:\n");
	scanf_s("%d", &data);
	while(data!=0)
	{
		st = Pop(st, data);
		scanf_s("%d", &data);
	}
	printf("打印栈中剩余的元素!\n");
	PrintStack(st);
	printf("----------------\n");
	printf("销毁栈!\n");
	st = Destroy(st);
	PrintStack(st);
}