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
	int mNumber;
	std::string mName;
	int mScore;

	void Print() const
	{
		std::cout << "(" << mNumber << ")" <<
			mName << " : " << mScore << std::endl;
	}
};

using Students = std::vector<Student>;
void AddStudent(Students& v)
{
	// ��ȣ, �̸�, ���� �Է�
	Student newStudent;
	std::cout << "��ȣ �̸� ���� �Է� : " << std::endl;
	if (std::cin >> newStudent.mNumber >> newStudent.mName >> newStudent.mScore)
	{
		auto itr = std::find_if(v.begin(), v.end(), [&](auto& e) {
			return e.mNumber == newStudent.mNumber;
			});
		if (itr != v.end())
		{
			std::cout << "�ߺ��� ��ȣ�Դϴ�." << std::endl;
		}
		for (const auto& e : v)
		{
			if (e.mNumber == newStudent.mNumber)
			{
				std::cout << "�ߺ��� ��ȣ�Դϴ�." << std::endl;
				return;
			}
		}
		v.push_back(newStudent);
	}
	else
	{
		std::cout << "�߸��� �Է��Դϴ�." << std::endl;
	}
}

void RemoveStudent(Students& v)
{
	// ��ȣ�� ����
	std::cout << "������ ��ȣ : ";
	int inputNumber;
	if (std::cin >> inputNumber)
	{
		auto itr = std::remove_if(v.begin(), v.end(), [&](auto& e) {
			return e.mNumber == inputNumber;
			});
		if (itr == v.end())
		{
			std::cout << "�ش� ��ȣ�� �л��� �������� �ʽ��ϴ�." << std::endl;
		}
		for (auto itr = v.begin(); itr != v.end(); ++itr)
		{
			if (itr->mNumber == inputNumber)
			{
				v.erase(itr);
				return;
			}
		}
		std::cout << "�ش��ȣ �л��� �������� �ʽ��ϴ�." << std::endl;
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
		e.Print();
	}
}

void PrintScoreInfo(const Students& v)
{
	int total{};
	for (const auto& e : v)
	{
		total += e.mScore;
	}

	std::cout << "Total : " << total 
			  << ", average : " << static_cast<float>(total) / v.size() 
			  << std::endl;
}

void PrintOverAverage(const Students& v)
{
	float average{};
	for (const auto& e : v)
	{
		average += e.mScore;
	}
	average /= v.size();

	for (const auto& e : v)
	{
		if (e.mScore >= average)
		{
			e.Print();
		}
	}
}

int main()
{
	// 1. Kim 80
	// 2. Lee 20
	// 3. Park 50
	// 4. Choi 30

	std::vector<Student> students{
		{1, "Kim", 80},
		{2, "Lee", 20},
		{3, "Park", 50},
		{4, "Choi", 30}
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
