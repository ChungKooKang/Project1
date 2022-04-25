# include <iostream>

class MyClass
{
public :
	~MyClass()
	{
		std::cout << "DELETE !" << std::endl;
	}
};


int main()
{

	std::unique_ptr<MyClass> sp{ new MyClass }; // smart pointer

	std::unique_ptr<MyClass> sp2 {std::make_unique<MyClass>()}; // smart pointer Ç¥±â 2
}
