# include <iostream>
# include <string>
# include <vector>
int main()
{
	// vector : 연속된 n개의 값 <집합>

	std::vector<int> v1{ 2, 3, 1, 5, 6 };
	for (int i = 0; i < v1.size(); ++i)
		{
			std::cout << v1[i] << std::endl;
		}
	std::cout << "----------" << std::endl;

	// range - based loop [0 : size)	범위기반반복문
	for (int element : v1)
	{
		std::cout << element << std::endl;
	}

	int myArray[]{ 1, 2, 3, 4, 5 };
	for (int e : myArray)
	{
		std::cout << e << std::endl;
	}
	return 0;
}
