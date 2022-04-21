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

	void Print()
	{
		std::cout << "(" << mNumber << ")" <<
			mName << " : " << mScore << std::endl;
	}
};

using Students = std::vector<Student>;
void AddStudent(Students& v)
{
	// ��ȣ, �̸�, ���� �Է�
	Student temp;
	std::cout << "��ȣ�� �Է��ϼ��� : ";
	std::cin >> temp.mNumber;
	std::cout << std::endl;

	std::cout << "�̸��� �Է��ϼ��� : ";
	std::cin >> temp.mName;
	std::cout << std::endl;

	std::cout << "������ �Է��ϼ��� : ";
	std::cin >> temp.mScore;
	std::cout << std::endl;
	
	v.push_back(temp);
}

void RemoveStudent(Students& v)
{
	// ��ȣ�� ����
	int inputNumber;
	std::vector<Student>::iterator itr;
	std::cout << "������ ��ȣ�� �Է��ϼ��� : ";
	std::cin >> inputNumber;
	std::find(v.begin(),v.end(), inputNumber);
	v.erase()
}

void PrintStudents(const Students& v)
{
	for (const auto& e : v)
	{
		std::cout << e.mNumber << ". " << e.mName << " : " << e.mScore << std::endl;
	}
}

void PrintScoreInfo(const Students& v)
{

}

void PrintOverAverage(const Students& v)
{

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
