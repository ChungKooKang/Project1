# include <iostream>
# include "Sort.h"
# include "Literal.h"
# include "DataStructure.h"
# include "LinkedList.h"
# include "Cat.h"
# include "Coordinate2D.h"


int main()
{
	Coordinate2D Test;
	Test.SetXY(1, 2);
	std::cout << " X : " << Test.GetX() << " Y : " << Test.GetY() << std::endl;
	std::cout << "���������� �Ÿ� : " << Test.LengthFromZero() << std::endl;
	Test.GetXY();
	return 0;
}
