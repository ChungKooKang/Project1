# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <numeric>
# include <array>
# include <forward_list>
# include <list>
# include <deque>
# include <stack>
# include <queue>

int main()
{
	std::priority_queue<int> container;
	
	container.push(1);
	container.push(1);
	container.push(1);
	container.push(2);
	container.push(2);
	container.push(3);
	container.push(3);
	container.push(1);

	std::cout << container.top() << std::endl; // queue�ε� front�� �ƴ϶� top�� ����ϴ� ������ ���� ���� �����ϴ� �켱������ �ֱ� �����̴�. �̶� �켱������ ������������ �ȴ�.


	std::cout << std::endl;
}
