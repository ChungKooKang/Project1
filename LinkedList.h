#pragma once
#include "Monster.h"
struct MonsterList
{
	Monster* pHead = nullptr;
	Monster* pTail = nullptr;
};

// Operation
// ����
Monster* CreateMonster(MonsterList& list, const char* name, const int hp);
// ������ �������ϱ�
int GetCountMonsterList(const MonsterList& list);

// ���� ���ҵ� ���� ����ϱ�
void PrintMonsterList(const MonsterList& list);
void PrintListRecursive(Monster* monster);
// ���� �˻�

Monster* FindMonster(const MonsterList& list, const char* name);
// ��ü ����Ʈ ����

void DeleteAll(MonsterList& list);
// Ư�� ���� ����
// 
