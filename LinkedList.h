#pragma once
#include "Monster.h"
struct MonsterList
{
	Monster* pHead = nullptr;
	Monster* pTail = nullptr;
};

// Operation
Monster* CreateMonster(MonsterList& list, const char* name, const int hp); // ����
int GetCountMonsterList(const MonsterList& list);// ������ �������ϱ�
void PrintMonsterList(const MonsterList& list); // ���� ���ҵ� ���� ����ϱ�
void PrintListRecursive(Monster* monster);// ���� ���ҵ� ���� ����ϱ�
Monster* FindMonster(const MonsterList& list, const char* name);// ���� �˻�
void DeleteAll(MonsterList& list);// ��ü ����Ʈ ����
bool DeleteMonster(MonsterList& list, const char* name);// Ư�� ���� ����






struct MonsterList2
{
	Monster2* pHead = nullptr;
	Monster2* pTail = nullptr;
};

// Operation
Monster2* CreateMonster(MonsterList2& list, const char* name, const int hp); // ����
int GetCountMonsterList(const MonsterList2& list);// ������ �������ϱ�
void PrintMonsterList(const MonsterList2& list); // ���� ���ҵ� ���� ����ϱ�
void PrintListRecursive(Monster2* monster);// ���� ���ҵ� ���� ����ϱ�
Monster2* FindMonster(const MonsterList2& list, const char* name);// ���� �˻�
void DeleteAll(MonsterList2& list);// ��ü ����Ʈ ����
bool DeleteMonster(MonsterList2& list, const char* name);// Ư�� ���� ����