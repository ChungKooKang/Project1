# include <iostream>
# include <string>
# include <vector>
int main()
{
	// vector : ���ӵ� n���� �� <����>

	std::vector<int> v1{ 2, 3, 1, 5, 6 };
	std::vector<std::string> v2 { "doggy", "kitty", "piggy", "bunny" };

	std::vector<int> v3(5); // v3(������ ũ��);
	std::vector<int> v4(5, 1); // v3(������ ũ��, ä��� ��);

	std::cout << v1[0] << std::endl;
	v1[1] = 7;

	return 0;
}
