# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
int Compare(const void* left, const void* right)
{
	int arg1 = *static_cast<const int*>(left);
	int arg2 = *static_cast<const int*>(right);

	if (arg1 > arg2)
	{
		return 1;
	}
	else if (arg1 < arg2)
	{
		return -1;
	}
	
	return 0;
}

int main()
{
	
	std::vector<int> v{ 1, 2, 3, 4, 5 };

	std::qsort(&v[0],v.size(),sizeof(int), Compare);

	for (const auto& e : v)			// ������ �ҷ��� �� �ִ�. �ֳ��ϸ� copy�� �Ͼ�� �ʱ� �����̴�.
	{
		std::cout << e << std::endl;
	}

}
