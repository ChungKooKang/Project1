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
	operator const float()
	{
		return sqrt(mX * mX + mY * mY);
	}
};


int main()
{
	Point2D pt1{ 2, 3 };

	float distance = pt1;

	std::cout << distance << std::endl;
}
