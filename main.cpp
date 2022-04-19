# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <numeric>
# include <array>
# include <forward_list>


int main()
{
	std::forward_list<int> container{ 10, 11, 20, 21 };

	std::forward_list<int>::iterator itr = std::find(container.begin(), container.end(), 11);
	container.insert_after(itr, 12);
	container.erase_after(itr);
	container.sort([](const int& a, const int& b)
		{
			return a < b;
		});

// ==

	container.sort(std::less<int>());

	container.sort(std::greater<int>());

	for (const auto& e : container)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;
	

	for (auto itr = container.begin(); itr != container.end(); itr++)
	{
		std::cout << *itr << " ";
	}
	std::cout << std::endl;

	/*for (int i = 0; i < container.size(); ++i)
	{
		std::cout << container[i] << " ";
	}*/ // contiguous 가 아니어서 쓸 수 없다.
	std::cout << std::endl;
}
