# include <iostream>
# include <string>
# include <vector>
int main()
{
	std::vector<int> v{ 1, 2, 3, 4, 5 };

	// range based for �������
	// ��κ��� ��� ���
	for (int& e : v)
	{
		e = 1;
	}


	// index for loop
	// index�� �ʿ��� ��
	for (int i = 0; i < v.size(); ++i)
	{
		v[i] = 1;
	}


	// iterator iterator
	// STL�� ���õ� ��� �۾�
	std::vector<int>::iterator itr2;

	for (itr2 = v.begin(); itr2 != v.end(); itr2++)
	{
		*itr2 = 1;
	}
	for (const auto& e : v)			// ������ �ҷ��� �� �ִ�. �ֳ��ϸ� copy�� �Ͼ�� �ʱ� �����̴�.
	{
		std::cout << e << std::endl;
	}
	return 0;
}
