# include <iostream>
#include "Sort.h"

void PrintArray(int input[], int size)
{

	for (int i = 0; i < size; i++)
	{
		std::cout << input[i] << " ";
	}
}
void Swap(int& value1, int& value2)
{
	int temp = value1;
	value1 = value2;
	value2 = temp;
}

//Squential Sort
// Time Complexity  : O (n^2)
// Space Complexity : O (n)
void SequentialSort(int input[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (input[i] > input[j])
			{
				Swap(input[i], input[j]);
			}
		}
	}
}
// Selection Sort
// Time Complexity : O (n^2)
// Space Complexity : O (n)
void SelectionSort(int input[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int minIndex = i;
		for (int j = i; j < size; j++)
		{
			if (input[minIndex] > input[j])
			{
				minIndex = j;
			}
		}
	}
}

// Bubble Sort
// Time Complexity : O(n^2)
// Space Complexity : O(n)
void BubbleSort(int input[], int size)
{
	for (int phase = 0; phase < size - 1; phase++)
	{
		for (int left = 0; left < size - 1 - phase; left++)
		{
			if (input[left] > input[left + 1])
			{
				Swap(input[left], input[left + 1]);
			}
		}
	}
}

// Insertion Sort
// Time Complexity  : O(n^2)
// Space Complexity : O(n)
void InsertionSort(int input[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int j = i;
		int target = input[i];
		while (--j >= 0 && target < input[j])
		{
			input[j + 1] = input[j];
			input[j] = target;
		}
	}
}

// Merge Sort
// Time Complexity  : O(n logn)
// Space Complexity :
void Merge(int input[], int start, int half, int end, int temp[])
{
	int i = start;
	int j = half + 1;
	int tempIndex{};
	while (i <= half && j <= end)
	{
		if (input[i] < input[j])
		{
			temp[tempIndex] = input[i++];
		}
		else
		{
			temp[tempIndex] = input[j++];
		}
	}

	while (i <= half)
	{
		temp[tempIndex++] = input[i++];
	}
	while (j <= end)
	{
		temp[tempIndex++] = input[j++];
	}
	tempIndex = 0;
	for (int i = start; i < end; i++)
	{
		input[i] = temp[tempIndex++];
	}
}
void MergeSort(int input[], int start, int end, int temp[])
{
	//base
	if (start >= end)
	{
		return;
	}
	// recursive
	int half = (start + end) / 2;

	MergeSort(input, start, half, temp);
	MergeSort(input, half + 1, end, temp);
	Merge(input, start, half, end, temp);
}
// Quick Sort
// Time Complexity : O(Cnlogn)
// Space Complexity : O(n)
void QuickSort(int input[], int left, int right)
{
	int i = left;
	int j = right;
	int pivot = input[(left + right) / 2];

	do
	{
		while (input[i] < pivot)
		{
			i++;
		}
		while (input[j] > pivot)
		{
			j--;
		}
		if (i <= j)
		{
			Swap(input[i], input[j]);
			i++;
			j--;
		}
	} while (i <= j);
	// base case + recursive case
	if (left < j)
	{
		QuickSort(input, left, j);

	}
	if (right > i)
	{
		QuickSort(input, j, right);
	}

	return;
}
