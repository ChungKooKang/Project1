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
	void SetAge(int age);	// Setter -> 이건 const가 붙으면 안된다.
};

