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
	std::queue<int> container;


	container.push(1);
	container.push(2);
	container.push(3);
	container.pop();
	
	std::cout << container.front() << std::endl;

	std::cout << std::endl;
}
