# include <iostream>
#include "DataStructure.h"

// STACK 구조

void PrintInfoForStack()
{
	std::cout << "<STACK>" << std::endl;
	std::cout << " [1] push" << std::endl;
	std::cout << " [2] pop" << std::endl;
	std::cout << " [3] exit" << std::endl;
	std::cout << "------------" << std::endl;
}

void ProcessUserInputForStack(Stack& stack)
{
	int command{};
	bool isExit{ false };
	while (true)
	{
		PrintStack(stack);
		std::cout << std::endl << " > ";
		std::cin >> command;
		switch (command)
		{
		case PUSH:
		{
			int value;
			std::cout << "    Value >> ";
			std::cin >> value;
			PushStack(stack, value);
			break;
		}
		case POP:
			PopStack(stack);
			break;
		case EXIT:
			isExit = true;
			break;
		default:
			std::cout << "잘못된 명령어 입니다." << std::endl;
			break;

		}
		if (isExit)
		{
			break;
		}
	}
}

void PrintStack(Stack& stack)
{
	std::cout << "<STACK>" << std::endl;
	if (stack.TopIndex < 0)
	{
		std::cout << " EMPTY" << std::endl;
		return;
	}
	else
	{
		for (int i = stack.TopIndex; i >= 0; i--)
		{
			std::cout << stack.array[i] << std::endl;
		}
	}
	std::cout << " ---------------------";
}

void PushStack(Stack& stack, int value)
{
	if (stack.TopIndex >= STACK_SIZE - 1)
	{
		std::cout << "스택이 가득 찼습니다. 더 이상 추가할 수 없어요!" << std::endl;
		return;
	}
	stack.array[++stack.TopIndex] = value;
}

void PopStack(Stack& stack)
{
	if (stack.TopIndex < 0)
	{
		std::cout << "스택이 비어 있습니다. 더 이상 꺼낼 수 없어요" << std::endl;
		return;
	}

	std::cout << stack.array[stack.TopIndex--] << "를 꺼냇습니다." << std::endl;
}

// QUEUE 구조

void PrintInfoForQueue()
{
	std::cout << "<QUEUE> " << std::endl;
	std::cout << " [1] push" << std::endl;
	std::cout << " [2] pop" << std::endl;
	std::cout << "----------------------" << std::endl;
}

void PrintQueue(Queue& queue)
{
	std::cout << "<QUEUE>" << std::endl;
	if (queue.last < 0)
	{
		std::cout << "EMPTY" << std::endl;
		return;
	}
	else
	{
		for (int i = 0; i <= queue.last; i++)
		{
			std::cout << queue.array[i] << std::endl;
		}
	}
	std::cout << "------------------------";
}

void EnQueue(Queue& queue, int value, int count)
{
	if (count >= QUEUE_SIZE - 1)
	{
		std::cout << "QUEUE가 가득 찼습니다. 더 이상 추가할 수 없어요!" << std::endl;
		return;
	}
	queue.array[++queue.last % QUEUE_SIZE] = value;
}

void DeQueue(Queue& queue, int count)
{
	if (count <= 0)
	{
		std::cout << "Queue가 비어 있습니다. 더 이상 꺼낼 수 없어요." << std::endl;
		return;
	}
	std::cout << queue.array[queue.first++ % QUEUE_SIZE] << "를 꺼냈습니다." << std::endl;
}

void ProcessUserInputForQueue(Queue& queue)
{
	int command{};
	int count{};
	bool isExit{ false };
	while (true)
	{
		PrintQueue(queue);
		std::cout << std::endl << " > ";
		std::cin >> command;
		switch (command)
		{
		case PUSH:
		{
			int value;
			std::cout << "    Value >> ";
			std::cin >> value;
			EnQueue(queue, value, count);
			count += 1;
			break;
		}
		case POP:
			DeQueue(queue, count);
			count -= 1;
			break;
		case EXIT:
			isExit = true;
			break;
		default:
			std::cout << "잘못된 명령어 입니다." << std::endl;
			break;

		}
		if (isExit)
		{
			break;
		}
	}
}
