# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <numeric>
# include <array>



int main()
{
	std::array<int, 4> intArray{ 0, 1, 2, 3 };


	for (const auto& e : intArray)
	{
		std::cout << e << std::endl;
	}

	for (auto itr = intArray.begin(); itr != intArray.end(); itr++)
	{
		std::cout << *itr << std::endl;
	}

	for (int i = 0; i < intArray.size(); ++i)
	{
		std::cout << intArray[i] << std::endl;
	}
}
