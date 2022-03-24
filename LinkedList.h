#pragma once
#include "Monster.h"
struct MonsterList
{
	Monster* pHead = nullptr;
	Monster* pTail = nullptr;
};

// Operation
// 생성
Monster* CreateMonster(MonsterList& list, const char* name, const int hp);
// 원소의 개수구하기
int GetCountMonsterList(const MonsterList& list);

// 몬스터 원소들 전부 출력하기
void PrintMonsterList(const MonsterList& list);
void PrintListRecursive(Monster* monster);
// 몬스터 검색

Monster* FindMonster(const MonsterList& list, const char* name);
// 전체 리스트 삭제

void DeleteAll(MonsterList& list);
// 특정 원소 삭제
// 
