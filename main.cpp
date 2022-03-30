# include <iostream>
# include "Sort.h"
# include "Literal.h"
# include "DataStructure.h"
# include "LinkedList.h"
# include "Cat.h"
# include "Coordinate2D.h"
class Myclass
{
private :

public :

	Myclass()  // Constructor
	{
		std::cout << "[Constructor]" << std::endl;
	}

	~Myclass()  // Destructor
	{
		std::cout << "[Destructor]" << std::endl;
	}
};

int main()
{
	Myclass c;

	std::cout << "c instance created!" << std::endl;

	return 0;
}
