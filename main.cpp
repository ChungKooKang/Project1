#include <iostream>
#include <chrono>
using Comparison = bool (*)(int, int);

bool Ascending(int x, int y)
{
	return x < y;
}
bool Descending(int x, int y)
{
	return x > y;
}
void Sort(int numbers[], int count, Comparison f)
{
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (f(numbers[i], numbers[j]))
			{
				int temp;
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
}
int main()
{
	const int CountOfArray = 10;
	int scores[CountOfArray]{ 20, 10, 40, 15, 30, 70, 60, 90, 80, 40 };
	
	// 현재시간
	auto startTime = std::chrono::system_clock::now();
	Sort(scores, CountOfArray, Ascending);
	// 현재시간
	auto endTime = std::chrono::system_clock::now();
	for (int i = 0; i < CountOfArray; i++)
	{
		std::cout << scores[i] << std::endl;
	}
	auto duration = endTime - startTime;
	std::cout << "Sort() runs " << duration.count() << "ms" << std::endl;
	return 0;
}