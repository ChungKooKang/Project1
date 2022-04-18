# include <iostream>
# include <string>
# include <vector>
int main()
{
	std::vector<int> v{ 1, 2, 3 };
	std::vector<int>::iterator itr; // iterator의 타입은 container에 내재되어 있다.

	itr = v.begin();
	
	// while 로 표현
	while (itr != v.end())
	{
		std::cout << *itr << std::endl;
		itr++;
	}

	// for 로 표현
	for (std::vector<int>::iterator itr2 = v.begin(); itr2 != v.end(); itr++)
	{
		std::cout << *itr2 << std::endl;
	}

	// ==

	for (auto itr2 = v.begin(); itr2 != v.end(); itr++)	// auto로 대체 가능
	{
		std::cout << *itr2 << std::endl;
	}

	return 0;
}
