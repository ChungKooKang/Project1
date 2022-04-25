# include <iostream>

class MyClass
{

};


int main()
{
	MyClass* p = new MyClass; // 일반 포인터

	std::unique_ptr<MyClass> sp{ new MyClass }; // smart pointer


	delete p;
}
