# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <numeric>
# include <array>
# include <forward_list>
# include <list>
# include <deque>
# include <stack>
# include <queue>
# include <set>
# include <map>

class Student
{
private :


public :
	std::string mName;
	int mScore;

	void Print() const
	{
		std::cout << mName << " : " << mScore << std::endl;
	}
};

using Students = std::map<int,Student>;
void AddStudent(Students& v)
{
	std::cout << " ��ȣ �̸� ���� : ";
	Student newStudent;
	int number;

	if (std::cin >> number >> newStudent.mName >> newStudent.mScore)
	{
		// auto == std::pair<std::map<int,number>::iterator, bool>
		auto result = v.insert({number, newStudent});
		if (result.second == false)
		{
			std::cout << "�ߺ��� �л� ��ȣ�Դϴ�." << std::endl;
		}
	}
	else
	{
		std::cout << "�߸��� �Է��Դϴ�. " << std::endl;
	}

}

void RemoveStudent(Students& v)
{
	std::cout << "���� �л� ��ȣ :  ";
	int number;
	if (std::cin >> number)
	{
		if (v.erase(number) == 0)
		{
			std::cout << "���� ��ȣ�Դϴ�." << std::endl;
		}
	}
	else
	{
		std::cout << "�߸��� �Է��Դϴ�." << std::endl;
	}
}

void PrintStudents(const Students& v)
{
	for (const auto& e : v)
	{
		std::cout << "(" << e.first << ")" << " ";
		e.second.Print();
	}
}

void PrintScoreInfo(const Students& v)
{
	int total{};
	for (auto& e : v)
	{
		total += e.second.mScore;
	}
	std::cout << "Total" << total
		<< ", average : " << total / v.size() << std::endl;
}

void PrintOverAverage(const Students& v)
{
	float average{};
	for (auto& e : v)
	{
		average += e.second.mScore;
	}
	average /= v.size();

	for (const auto& e : v)
	{
		if (e.second.mScore >= average)
		{
			std::cout << "(" << e.first << ")";
			e.second.Print();
		}
	}
}

int main()
{
	// 1. Kim 80
	// 2. Lee 20
	// 3. Park 50
	// 4. Choi 30

	Students students{
		{1, {"Kim",80}},
		{2, {"Lee",20}},
		{3, {"Park",50}},
		{4, {"Choi",30}}
	};
	
	int command{};
	while (command != 6)
	{
		std::cout << "1. �л� �߰�" << std::endl;
		std::cout << "2. �л� ����" << std::endl;
		std::cout << "3. ��ü �л� ���" << std::endl;
		std::cout << "4. Ŭ���� ��� �� ����" << std::endl;
		std::cout << "5. Ŭ���� ��� �̻��� �л� ���" << std::endl;
		std::cout << "6. ����" << std::endl;
		
		std::cout << "> ";
		std::cin >> command;
		switch (command)
		{
		case 1 :
			AddStudent(students);
			break;
		case 2 :
			RemoveStudent(students);
			break;
		case 3 :
			PrintStudents(students);
			break;
		case 4 :
			PrintScoreInfo(students);
			break;
		case 5 :
			PrintOverAverage(students);
			break;
		case 6 :
			break;
		default :
			std::cout << "�߸��� ��ɾ� �Դϴ�." << std::endl;
			break;

		}
	}
}
