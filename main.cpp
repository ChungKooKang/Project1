# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <numeric>
# include <array>



int main()
{
	std::vector<int> container {0, 1, 2, 3, 4};
	//std::array<int, 4> container{ 0, 1, 2, 3 };

	//container.push_back(3);  // 뒤에 원소가 하나 추가되며 이것은 O(1)이다.
	//container.pop_back();	 // 뒤에 원소 하나를 뺴 버리며 이것 또한 복잡도가 O(1)이다.
	//container.erase(container.begin()); // 특정 원소만 지우기 기거는 overhead가 일어나 느리게 된다.
	//container.resize(10, 100);				// 배열의 크기를 조정하고 남는 공간에 '100'를 넣는다.
	container.clear();					//원소들이 싹 없어진다.


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

	for (int i = 0; i < container.size(); ++i)
	{
		std::cout << container[i] << " ";
	}
	std::cout << std::endl;
}
