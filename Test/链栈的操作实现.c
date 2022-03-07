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

LinkStack* Pop(LinkStack* lst, ElemType data)//ԭ���������������ȳ�,�ϸ���ѭ
{
	LinkStack* ls = lst;
	if (lst == NULL)
	{
		printf("��ջΪ��!\n");
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
			printf("����ĳ�ջ˳��!����������!\n");//������ԭ���ջ���ᱨ����ʾ
			return lst;
		}
}

void PrintStack(LinkStack* lst)
{
	LinkStack* ls = lst;
	if (ls == NULL)
	{
		printf("��ջΪ��!\n");
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
		printf("��ջΪ��!\n");
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
		printf("��ջ�ɹ�����!\n");
	return p;
}

void LinkStackRealize()
{
	int data;
	LinkStack* st = InitStack();
	printf("��������ջԪ��,��0��Ϊ���������־:\n");
	scanf_s("%d", &data);
	while (data!=0)
	{
		st = Push(st, data);
		scanf_s("%d",&data);	
	}
	printf("��ӡ��ջ���ջ��Ԫ��!\n");
	PrintStack(st);
	printf("----------------\n");
	printf("����ȷ�����ջԪ��,��0��Ϊ���������־:\n");
	scanf_s("%d", &data);
	while(data!=0)
	{
		st = Pop(st, data);
		scanf_s("%d", &data);
	}
	printf("��ӡջ��ʣ���Ԫ��!\n");
	PrintStack(st);
	printf("----------------\n");
	printf("����ջ!\n");
	st = Destroy(st);
	PrintStack(st);
}