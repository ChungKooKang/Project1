# include <iostream>
# include "Sort.h"
# include "Literal.h"
# include "DataStructure.h"
# include "LinkedList.h"
# include "Cat.h"

class Point2D
{
private :
	int mX;
	int mY;
public :
	// Getter  / Setter
	
	//Setter
	void SetX(int x);
	void Sety(int y);
	void Set(int x, int y);

	//Getter
	void GetX();
	void GetY();


	void Print();
};

int main()
{
	Point2D pt1;

	pt1.Set(1, 1);
	Cat nacho;
	nacho.Meow();
	return 0;
}

void Point2D::SetX(int x)
{
	mX = x;
}

void Point2D::Sety(int y)
{
	mY = y;
}

void Point2D::Set(int x, int y)
{
	mX = x;
	mY = y;
}

void Point2D::GetX()
{

}

void Point2D::GetY()
{

}
