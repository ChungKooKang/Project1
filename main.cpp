# include <iostream>
# include <string>
# include <vector>
int main()
{
	std::vector<int> v{ 1, 2, 3, 4, 5 };

	// range based for ����������� ��� �����
	for (int& e : v)
	{
		e = 1;
		std::cout << e << std::endl;
	}

	// iterator iterator�� ��� �����
	std::vector<int>::iterator itr2;

	for (itr2 = v.begin(); itr2 != v.end(); itr2++)
	{
		std::cout << *itr2 << std::endl;
	}

	return 0;
}
