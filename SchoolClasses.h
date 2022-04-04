#pragma once
class SchoolClasses
{
private:
	int grade[3];

	class Student
	{
		char name[20];
		int studentNumber;
		int score;
		Student* pNext;
	};
	class StudentList
	{
		Student* start = nullptr;
		Student* end = nullptr;
	};

public:
	SchoolClasses() : grade{ 1, 2, 3 }
	{

	}

};

