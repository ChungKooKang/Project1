# include <iostream>
# include <string>
# include <vector>
int main()
{
	std::vector<int> v{ 1, 2, 3 };
	std::vector<int>::iterator itr; // iterator�� Ÿ���� container�� ����Ǿ� �ִ�.

	itr = v.begin();
	
	// while �� ǥ��
	while (itr != v.end())
	{
		std::cout << *itr << std::endl;
		itr++;
	}

	// for �� ǥ��
	for (std::vector<int>::iterator itr2 = v.begin(); itr2 != v.end(); itr++)
	{
		std::cout << *itr2 << std::endl;
	}

	// ==

	for (auto itr2 = v.begin(); itr2 != v.end(); itr++)	// auto�� ��ü ����
	{
		std::cout << *itr2 << std::endl;
	}

	return 0;
}
