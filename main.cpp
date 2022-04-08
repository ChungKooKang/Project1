# include <iostream>
class Animal
{
protected :
	int mAge;
public :
	int mWeight;
};

class Cat : public Animal
{
public :
	void Meow();
};

class Dog : public Animal
{

public :
	void Bark();
};

int main()
{
	Animal a;
	a.mAge = 10; // (x)
	return 0;
}
