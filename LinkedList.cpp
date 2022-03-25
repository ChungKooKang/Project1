# include "LinkedList.h"
# include <cstring>
# include <iostream>


// Single Linked List


Monster* CreateMonster(MonsterList& list, const char* name, const int hp)
{
    Monster* pNew = new Monster{};
    
    pNew->hp = hp;
    strcpy_s(pNew-> name,NAME_LENGTH,name);
    if (list.pTail == nullptr)
    {
        list.pHead = pNew;
    }
    else
    {
       list.pTail->pNext = pNew;
    }
    list.pTail = pNew;
    return nullptr;
}

int GetCountMonsterList(const MonsterList& list)
{
    int count{};
    for (Monster* i = list.pHead; i != nullptr;i = i->pNext)
    {
        count++;
    }
    return count;
}

void PrintMonsterList(const MonsterList& list)
{
    for (Monster* i = list.pHead; i != nullptr; i = i->pNext)
    {
        std::cout << "--------------" << std::endl;
        std::cout << i->name          << std::endl
                  << i->hp            << std::endl;
    }
}
void PrintListRecursive(Monster* monster)
{
    //base
    if (monster == nullptr)
    {
        return;
    }
    //recursive
    std::cout << monster->name << " : " << monster->hp << std::endl;
    PrintListRecursive(monster->pNext);
}

Monster* FindMonster(const MonsterList& list, const char* name)
{
    for (Monster* p = list.pHead; p != nullptr; p = p->pNext)
    {
        if (strcmp(p->name, name) == 0)
        {
            return p;
        }
    }

    return nullptr;
}

void DeleteAll(MonsterList& list)
{
    Monster* p = list.pHead;
    Monster* pNext{};
    while (p != nullptr)
    {
        pNext = p->pNext;
        delete p;
        p = pNext;
    }

    list.pHead = nullptr;
    list.pTail = nullptr;
}

bool DeleteMonster(MonsterList& list,const char* name)
{
    Monster* pCurrent = list.pHead;
    Monster* pPrevious{};
    while (pCurrent != nullptr)
    {
        if (strcmp(pCurrent->name, name) == 0)
        {
            break;
        }
        pPrevious = pCurrent;
        pCurrent = pCurrent->pNext;
    }
    if (pCurrent == nullptr)
    {
        return false;
    }
    if (list.pHead == list.pTail)
    {
        //원소 하나만 있을 때
        list.pHead = list.pTail = nullptr;
    }
    else if (list.pHead == pCurrent)
    {
        // 첫 번째 원소
        list.pHead = pCurrent->pNext;
    }
    else if (list.pTail == pCurrent)
    {
        // 마지막 원소
        list.pTail = pPrevious;
        pPrevious->pNext = nullptr;

    }
    else
    {
        // 중간에 있을 때
        pPrevious->pNext = pCurrent->pNext;

    }
    delete pCurrent;
    return true;
}


// Double Linked List


Monster2* CreateMonster(MonsterList2& list, const char* name, const int hp)
{
    return nullptr;
}

int GetCountMonsterList(const MonsterList2& list)
{
    return 0;
}

void PrintMonsterList(const MonsterList2& list)
{
}

void PrintListRecursive(Monster2* monster)
{
}

Monster2* FindMonster(const MonsterList2& list, const char* name)
{
    return nullptr;
}

void DeleteAll(MonsterList2& list)
{
}

bool DeleteMonster(MonsterList2& list, const char* name)
{
    return false;
}
