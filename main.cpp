# include <iostream>

class MyClass
{

};


int main()
{
	MyClass* p = new MyClass; // �Ϲ� ������

	std::unique_ptr<MyClass> sp{ new MyClass }; // smart pointer


	delete p;
}
