# include <iostream>
// 게임 개발자
class GameDeveloper
{
public :
	std::string mName;
	int mAge;

using namespace std;

};
class Programmer : public GameDeveloper
{

public :
	void Coding();
	void Debugging();
};

class Designer : public GameDeveloper
{
public :
	void Documentation();
	void Presentation();
};

class ChiefProgrammer : public Programmer
{
public :
	void Architecture();
	void Scheduling();
};
class ChiefDesinger : public Designer
{
public :
	void Meeting();
	void Scheduling();
};
int main()
{
	Animal a;
	a.mAge = 10; // (x)
template <typename T>

void Sort(T input[], int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (input[i] > input[j])
			{
				T temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}
}

int main()
{
	int array[]{ 5, 3, 2, 4, 1 };

	Sort<int>(array, 5);

	for (int i = 0; i < 5; ++i)
	{
		cout << array[i] << endl;

	}
	return 0;
}
