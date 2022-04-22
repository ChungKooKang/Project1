# include <iostream>

using Lambda = void (*)(int, int);

int main()
{
	Lambda lambda = [](int x, int y) -> void
	{
		std::cout << x << " " << y;
	};

	lambda(1, 2);


}
