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
	std::cout << "<<숫자뽑기>>" << std::endl
		<< "몬스터 숫자 : " << GetCountMonsterList(myList) << std::endl << std::endl;
	std::cout << "<<몬스터 리스트 업>>" << std::endl; PrintMonsterList(myList);
	std::cout << "<<몬스터 찾기>>" << std::endl; FindMonster(myList, "Wolf");
	std::cout << "<<싹 다 지우기>>" << std::endl; DeleteAll()
	return 0;
}