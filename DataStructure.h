#pragma once
// constants
const int STACK_SIZE{ 10 };
const int QUEUE_SIZE{ 10 };

// STACK ����
enum Command
{
	PUSH = 1,
	POP  = 2,
	EXIT = 3
};
struct Stack
{
	int array[STACK_SIZE]{};
	int TopIndex { -1};
};

void PrintInfoForStack();
void ProcessUserInputForStack(Stack& stack);
void PrintStack(Stack& stack);
void PushStack(Stack& stack, int value);
void PopStack(Stack& stack);

// QUEUE ����
struct Queue
{
	int array[QUEUE_SIZE]{};
	int first{ };
	int last{-1};
};
void PrintInfoForQueue(); // ����� ����
void PrintQueue(Queue& queue);
void EnQueue(Queue& queue, int value, int count);
/*
���� �ʿ��ұ�?
���� á�� ���� ���� if�� �ذ�
�ƴϸ�
++stack.topindex = value;
*/
void DeQueue(Queue& queue, int count);
/*
���� ������ ��� �ұ ����ؾ� �Ѵ�.

1. �����.
2. ������ ó������ �ٽ� ����.
3. �׳� array�� ũ�� �����.

*/
void ProcessUserInputForQueue (Queue& queue);