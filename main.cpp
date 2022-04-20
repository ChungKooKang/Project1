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

using MyPair = std::pair<std::string, std::string>;
int main()
{
	std::map<std::string, std::string> container;
	// "array" : " �ܼ� �迭"
	// "vector" : " �����迭"
	// " stack " : "LIOF ����"
	std::pair < std::string, std::string> element;
	element.first = "array";
	element.second = "Simple Static array";
	container.insert(element);

	// constructor�� Ȱ���ؼ� �����
	container.insert(std::pair<std::string, std::string>("vector", "Dynamic array"));
	
	// using alias
	container.insert(MyPair("stack", "LIFO"));

	// uniform initialization
	container.insert({ "queue", "FIFO" });

	for (const auto& e : container)
	{
		std::cout << e.first << " : " << e.second;
		std::cout  << std::endl;
	}

	std::cout << container.at("queue") << std::endl;

	//==

	std::cout << container["queue"] << std::endl;
	
	
	std::cout << std::endl;
}
