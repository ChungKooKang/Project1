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

	//container.push_back(3);  // �ڿ� ���Ұ� �ϳ� �߰��Ǹ� �̰��� O(1)�̴�.
	//container.pop_back();	 // �ڿ� ���� �ϳ��� �� ������ �̰� ���� ���⵵�� O(1)�̴�.
	//container.erase(container.begin()); // Ư�� ���Ҹ� ����� ��Ŵ� overhead�� �Ͼ ������ �ȴ�.
	//container.resize(10, 100);				// �迭�� ũ�⸦ �����ϰ� ���� ������ '100'�� �ִ´�.
	container.clear();					//���ҵ��� �� ��������.


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
