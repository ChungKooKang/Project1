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


}
