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

int main()
{
	std::stack<int> container;

	std::stack<int> tempContainer(container);

	container.push(1);
	container.push(2);
	container.push(3);
	container.pop();
	
	while (!tempContainer.empty())
	{
		std::cout << tempContainer.top() << std::endl;

		tempContainer.pop();
	}

	std::cout << std::endl;
}
