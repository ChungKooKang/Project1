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
	// 번호, 이름, 점수 입력
	Student newStudent;
	std::cout << "번호 이름 점수 입력 : " << std::endl;
	if (std::cin >> newStudent.mNumber >> newStudent.mName >> newStudent.mScore)
	{
		auto itr = std::find_if(v.begin(), v.end(), [&](auto& e) {
			return e.mNumber == newStudent.mNumber;
			});
		if (itr != v.end())
		{
			std::cout << "중복된 번호입니다." << std::endl;
		}
		for (const auto& e : v)
		{
			if (e.mNumber == newStudent.mNumber)
			{
				std::cout << "중복된 번호입니다." << std::endl;
				return;
			}
		}
		v.push_back(newStudent);
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
	}
}

void RemoveStudent(Students& v)
{
	// 번호로 삭제
	std::cout << "삭제할 번호 : ";
	int inputNumber;
	if (std::cin >> inputNumber)
	{
		auto itr = std::remove_if(v.begin(), v.end(), [&](auto& e) {
			return e.mNumber == inputNumber;
			});
		if (itr == v.end())
		{
			std::cout << "해당 번호의 학생이 존재하지 않습니다." << std::endl;
		}
		for (auto itr = v.begin(); itr != v.end(); ++itr)
		{
			if (itr->mNumber == inputNumber)
			{
				v.erase(itr);
				return;
			}
		}
		std::cout << "해당번호 학생이 존재하지 않습니다." << std::endl;
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
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
