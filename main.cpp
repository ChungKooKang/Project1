# include <iostream>

enum Flags
{
	poison = 1,
	bleed = 2,
	paralyze = 3
};

constexpr int operator | (Flags f1, Flags f2)
{
	return Flags(int(f1) | int(f2));
}

int main()
{
	
	Flags status;

	switch (status)
	{
	case poison :
		break;

	case poison | bleed :
		break;

	case bleed :
		break;
	}
}
