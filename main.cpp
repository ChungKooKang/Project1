# include <iostream>
# include <string>
# include <vector>
int main()
{
	// vector : ���ӵ� n���� �� <����>

	std::vector<int> v1{ 2, 3, 1, 5, 6 };
	v1.push_back(4);
	for (int element : v1)
	{
		std::cout << element << std::endl;
	}

	// ��������
	// ���ڵ��� �Է� �ް� ���հ�� ����� ���غ��ô�.
	// ��) 1 2 3 6 4 8 0 4 0 10 d
	// ���ڸ� ������ �����Ͽ� �Է��ϼ���.
	// �Է� ����� ���ڰ� �ƴ� ���ڸ� �Է��Ͻø� �˴ϴ�.
	std::vector<int> v2{};
	int sum{};
	int input{};
	int count{};
	while (std::cin >> input)
	{
		v2.push_back(input);
		sum += v2[count];
		count++;
	}
	std::cout << sum << std::endl;
	return 0;
}
