# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <numeric>
int Compare(const void* left, const void* right)
{
	int arg1 = *static_cast<const int*>(left);
	int arg2 = *static_cast<const int*>(right);
	return arg1 - arg2;
}



int main()
{
	
	std::vector<int> v{ 3, 1, 3, 2, 5 };
	int v2[]{ 3, 4, 1, 5, 2 };

	// qsort ���� & lambda exprssion ����
	std::qsort(&v[0], v.size(), sizeof(int), [](const void* left, const void* right)->int {
		int arg1 = *static_cast<const int*>(left);
		int arg2 = *static_cast<const int*>(right);
		return arg1 - arg2;
		});

	// qsort ���� C ����
	std::qsort(&v2[0], 5, sizeof(int), Compare);

	// sort  ����
	std::sort(v.begin(), v.end());

	//acumulate ����
	std::cout << "�հ� : " << std::accumulate(v.begin(), v.end(), 0) << std::endl;


	for (const auto& e : v)			// ������ �ҷ��� �� �ִ�. �ֳ��ϸ� copy�� �Ͼ�� �ʱ� �����̴�.
	{
		std::cout << e << std::endl;
	}

}
