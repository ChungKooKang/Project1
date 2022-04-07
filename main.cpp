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

	MyClass(const MyClass& x) : mValue{ x.mValue } // �̰� �ڵ����� �����ȴ�.
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
	MyClass c1{ MyClass {1} }; // �̰͵� ���������� r-value �̱� ������ ���簡 �� �Ͼ�� value�� �̸��� �ٿ�����.
	MyClass c2;  //�̷��� �ؾ� ���� �����ڰ� ���� �Ѵ�.
	c2 = c1; // ���Կ����ڰ� �⺻���� �̰��� ����Ѵ�. �̰��� copy assignment operator��� �Ѵ�.
	return 0;
}
