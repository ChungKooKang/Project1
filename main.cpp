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

	std::cout << container.top() << std::endl; // queue인데 front가 아니라 top를 사용하는 이유는 제일 먼저 실행하는 우선순위가 있기 때문이다. 이때 우선순위는 내림차순으로 된다.


	std::cout << std::endl;
}
