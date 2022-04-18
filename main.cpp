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

	// qsort 연습 & lambda exprssion 연습
	std::qsort(&v[0], v.size(), sizeof(int), [](const void* left, const void* right)->int {
		int arg1 = *static_cast<const int*>(left);
		int arg2 = *static_cast<const int*>(right);
		return arg1 - arg2;
		});

	// qsort 연습 C 버전
	std::qsort(&v2[0], 5, sizeof(int), Compare);

	// sort  연습
	std::sort(v.begin(), v.end());

	//acumulate 연습
	std::cout << "합계 : " << std::accumulate(v.begin(), v.end(), 0) << std::endl;


	for (const auto& e : v)			// 빠르게 불러올 수 있다. 왜냐하면 copy가 일어나지 않기 때문이다.
	{
		std::cout << e << std::endl;
	}

}
