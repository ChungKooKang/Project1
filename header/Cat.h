#pragma once
class Cat
{
private :
	int mAge;
	// constant memeber variable
	const int FOOT_COUNT{ 4 };

public :
	// constant memeber functiond
	void Meow() const;
	int GetAge() const;		// Getter
	void SetAge(int age);	// Setter -> �̰� const�� ������ �ȵȴ�.
};

