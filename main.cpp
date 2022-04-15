# include <iostream>
# include <string>
# include <vector>
int main()
{
	// vector : 연속된 n개의 값 <집합>

	std::vector<int> v1{ 2, 3, 1, 5, 6 };
	std::vector<std::string> v2 { "doggy", "kitty", "piggy", "bunny" };

	std::vector<int> v3(5); // v3(집합의 크기);
	std::vector<int> v4(5, 1); // v3(집합의 크기, 채우는 값);

	std::cout << v1[0] << std::endl;
	v1[1] = 7;

	return 0;
}
