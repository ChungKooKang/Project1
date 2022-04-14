# include <iostream>

using namespace std;

template <typename T>

void Sort(T input[], int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (input[i] > input[j])
			{
				T temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}
}

int main()
{
	int array[]{ 5, 3, 2, 4, 1 };

	Sort<int>(array, 5);

	for (int i = 0; i < 5; ++i)
	{
		cout << array[i] << endl;

	}
	return 0;
}
