# include <iostream>

class MyClass
{
public :
	int mValue;

	MyClass()
	{
		std::cout << "MyClass()" << std::endl;
	}

	MyClass(int x) : mValue{ x }
	{
		std::cout << "MyClass(int)" << std::endl;
	}

	MyClass(const MyClass& x) : mValue{ x.mValue } // 이건 자동으로 생성된다.
	{
		std::cout << "MyClass(MyClass&)" << std::endl;
	}

	MyClass& operator = (const MyClass& x)
	{
		std::cout << "operator = " << std::endl;
		return *this;
	}

};

int main()
{
	MyClass c1{ MyClass {1} }; // 이것도 만찬가지로 r-value 이기 때문에 복사가 안 일어나고 value에 이름만 붙여진다.
	MyClass c2;  //이렇게 해야 복사 생성자가 일을 한다.
	c2 = c1; // 대입연산자가 기본으로 이것을 허용한다. 이것을 copy assignment operator라고 한다.
	return 0;
}
