# include <iostream>
# include "Sort.h"
# include "Literal.h"
# include "DataStructure.h"
# include "LinkedList.h"
int main()
{
	MonsterList2 myList{};
	CreateMonster(myList, "Wolf", 10);
	CreateMonster(myList, "Slime", 20);
	CreateMonster(myList, "Demon", 30);
	std::cout << "<<���ڻ̱�>>" << std::endl
		<< "���� ���� : " << GetCountMonsterList(myList) << std::endl << std::endl;
	std::cout << "<<���� ����Ʈ ��>>" << std::endl; PrintMonsterList(myList);
	std::cout << "<<���� ã��>>" << std::endl; FindMonster(myList, "Wolf");
	std::cout << "<<�� �� �����>>" << std::endl; DeleteAll()
	return 0;
}