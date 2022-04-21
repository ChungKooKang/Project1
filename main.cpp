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
	// 번호, 이름, 점수 입력
	Student temp;
	std::cout << "번호를 입력하세요 : ";
	std::cin >> temp.mNumber;
	std::cout << std::endl;

	std::cout << "이름을 입력하세요 : ";
	std::cin >> temp.mName;
	std::cout << std::endl;

	std::cout << "점수를 입력하세요 : ";
	std::cin >> temp.mScore;
	std::cout << std::endl;
	
	v.push_back(temp);
}

void RemoveStudent(Students& v)
{
	// 번호로 삭제
	int inputNumber;
	std::vector<Student>::iterator itr;
	std::cout << "삭제할 번호를 입력하세요 : ";
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
		std::cout << "1. 학생 추가" << std::endl;
		std::cout << "2. 학생 제거" << std::endl;
		std::cout << "3. 전체 학생 출력" << std::endl;
		std::cout << "4. 클래스 평균 및 총점" << std::endl;
		std::cout << "5. 클래스 평규 이상의 학생 목록" << std::endl;
		std::cout << "6. 종료" << std::endl;
		
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
			std::cout << "잘못된 명령어 입니다." << std::endl;
			break;

		}
	}
}
