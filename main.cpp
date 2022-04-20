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
# include <set>
# include <map>
int main()
{
	std::set<int> container{ 8, 3, 1 , 6, 10, 27, 4, 5 };

	for (const auto& e : container)
	{
		std::cout << e << " ";
	}
	

	std::cout << std::endl;
}
