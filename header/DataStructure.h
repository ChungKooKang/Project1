#pragma once
// constants
const int STACK_SIZE{ 10 };
const int QUEUE_SIZE{ 10 };

// STACK 구조
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

// QUEUE 구조
struct Queue
{
	int array[QUEUE_SIZE]{};
	int first{ };
	int last{-1};
};
void PrintInfoForQueue(); // 사용자 설명
void PrintQueue(Queue& queue);
void EnQueue(Queue& queue, int value, int count);
/*
뭐가 필요할까?
가득 찼을 때가 문제 if로 해결
아니면
++stack.topindex = value;
*/
void DeQueue(Queue& queue, int count);
/*
빠져 나오고 어떻게 할까를 고민해야 한다.

1. 땡긴다.
2. 끝나면 처음부터 다시 쓴다.
3. 그냥 array를 크게 만든다.

*/
void ProcessUserInputForQueue (Queue& queue);