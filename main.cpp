# include <iostream>
# include <string>
void Print(const std::string& str)
{
	std::cout << str.size() << " : " << str << std::endl;
}

int main()
{
	int number = 123;
	std::string str;
	str = std::to_string(number);			// 123 -> "123"
	number = std::stoi(str);				// "123" - > 123

	return 0;
}
