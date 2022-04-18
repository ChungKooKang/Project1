# include <iostream>
# include <string>
# include <vector>
int main()
{
	std::vector<int> v{ 1, 2, 3, 4, 5 };

	// range based for 범위기반
	// 대부분의 경우 사용
	for (int& e : v)
	{
		e = 1;
	}


	// index for loop
	// index가 필요할 때
	for (int i = 0; i < v.size(); ++i)
	{
		v[i] = 1;
	}


	// iterator iterator
	// STL과 관련된 모든 작업
	std::vector<int>::iterator itr2;

	for (itr2 = v.begin(); itr2 != v.end(); itr2++)
	{
		*itr2 = 1;
	}
	for (const auto& e : v)			// 빠르게 불러올 수 있다. 왜냐하면 copy가 일어나지 않기 때문이다.
	{
		std::cout << e << std::endl;
	}
	return 0;
}
