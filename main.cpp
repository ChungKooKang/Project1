# include <iostream>

template<typename T,typename... Types>
void Function(Types... args)
{
	int myArray[]{ args... };

	for (const auto& e : myArray)
	{
		std::cout << e << std::endl;
	};
	std::cout << sizeof...(Types) << std::endl;
	std::cout << sizeof...(args) << std::endl;
}


int main()
{
	Function(1, 2, 3);
	// Function(1, 1.0, "abc");
}
