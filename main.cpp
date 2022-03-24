# include <iostream>
# include "Sort.h"
# include "Literal.h"
# include "DataStructure.h"
# include "LinkedList.h"
int main()
{
	MonsterList myList{};
	CreateMonster(myList, "Wolf", 10);
	CreateMonster(myList, "Slime", 20);
	CreateMonster(myList, "Demon", 30);
	std::cout << GetCountMonsterList(myList) << std::endl;
	PrintMonsterList(myList);
	PrintListRecursive(myList.pHead);
	std::cout << ((FindMonster(myList, "Slime"))? "Not Found" : "Found") << std::endl;
	return 0;
}