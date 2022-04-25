# include <iostream>

template<typename T,typename... Types>

void Function()
{
	std::cout << "---end---" << std::endl;
}

void Function(T arg, Types... args)
{
	std::cout << arg << " ";

	Function(args...);
}


int main()
{
	Function(1, 2, 3);
	// Function(1, 1.0, "abc");
}
