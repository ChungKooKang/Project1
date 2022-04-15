# include <iostream>
# include <string>
# include <vector>
int main()
{
	// vector : 연속된 n개의 값 <집합>

	std::vector<int> v1{ 2, 3, 1, 5, 6 };
	v1.push_back(4);
	for (int element : v1)
	{
		std::cout << element << std::endl;
	}

	// 연습문제
	// 숫자들을 입력 받고 총합계와 평균을 구해봅시다.
	// 예) 1 2 3 6 4 8 0 4 0 10 d
	// 숫자를 공백을 구분하여 입력하세요.
	// 입력 종료는 숫자가 아닌 문자를 입력하시면 됩니다.
	std::vector<int> v2{};
	
	for (int value; std::cin >> value;)
	{
		v2.push_back(value);
	}
	int sum{};
	for (int e : v2)
	{
		sum += e;
	}
	std::cout << sum << std::endl;
	std::cout << static_cast<float>(sum) / v2.size() << std::endl;
	return 0;
}
