# include <iostream>

class Point2D
{
private :
	int mX;
	int mY;

public :
	Point2D(int x, int y) : mX{ x }, mY{ y }
	{

	}
/*	operator const float()
	{
		return sqrt(mX * mX + mY * mY);
	}
*/
	void operator () (int x, int y)
	{
		mX = x;
		mY = y;
	}
	void operator () ()
	{
		mX = 0;
		mY = 0;
	}
	void Print()
	{
		std::cout << "(" << mX << ", " << mY << ")" << std::endl;
	}
	friend std::ostream& operator << (std::ostream &os, const Point2D& pt);
};
std::ostream& operator << (std::ostream &os,const Point2D& pt)
{
	os << "(" << pt.mX << ", " << pt.mY << ")" << std::endl;
	return os;
}



int main()
{
	Point2D pt1{ 2, 3 }, pt2{3, 4};
	// function + object == functor
	pt1();
	pt1.Print();

	pt1(3, 3);
	pt1.Print();

	std::cout << pt1 << pt2;
}
