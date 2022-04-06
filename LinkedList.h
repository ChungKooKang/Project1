#pragma once
#include "Monster.h"
struct MonsterList
{
	Monster* pHead = nullptr;
	Monster* pTail = nullptr;
};

// Operation
Monster* CreateMonster(MonsterList& list, const char* name, const int hp); // 생성
int GetCountMonsterList(const MonsterList& list);// 원소의 개수구하기
void PrintMonsterList(const MonsterList& list); // 몬스터 원소들 전부 출력하기
void PrintListRecursive(Monster* monster);// 몬스터 원소들 전부 출력하기
Monster* FindMonster(const MonsterList& list, const char* name);// 몬스터 검색
void DeleteAll(MonsterList& list);// 전체 리스트 삭제
bool DeleteMonster(MonsterList& list, const char* name);// 특정 원소 삭제






struct MonsterList2
{
	Monster2* pHead = nullptr;
	Monster2* pTail = nullptr;
};

// Operation
Monster2* CreateMonster(MonsterList2& list, const char* name, const int hp); // 생성
int GetCountMonsterList(const MonsterList2& list);// 원소의 개수구하기
void PrintMonsterList(const MonsterList2& list); // 몬스터 원소들 전부 출력하기
void PrintListRecursive(Monster2* monster);// 몬스터 원소들 전부 출력하기
Monster2* FindMonster(const MonsterList2& list, const char* name);// 몬스터 검색
void DeleteAll(MonsterList2& list);// 전체 리스트 삭제
bool DeleteMonster(MonsterList2& list, const char* name);// 특정 원소 삭제