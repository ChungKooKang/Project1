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
        //???? ?????? ???? ??
        list.pHead = list.pTail = nullptr;
    }
    else if (list.pHead == pCurrent)
    {
        // ?? ???? ????
        list.pHead = pCurrent->pNext;
    }
    else if (list.pTail == pCurrent)
    {
        // ?????? ????
        list.pTail = pPrevious;
        pPrevious->pNext = nullptr;

    }
    else
    {
        // ?????? ???? ??
        pPrevious->pNext = pCurrent->pNext;

    }
    delete pCurrent;
    return true;
}


// Double Linked List


Monster2* CreateMonster(MonsterList2& list, const char* name, const int hp)
{
    Monster2* pNew = new Monster2{};

    pNew->hp = hp;
    strcpy_s(pNew->name, NAME_LENGTH, name);
    if (list.pTail == nullptr)
    {
        list.pHead = pNew;
        pNew->pPrev = nullptr;
    }
    else
    {
        list.pTail->pNext = pNew;
        pNew->pPrev = list.pTail->pNext;
    }
    list.pTail = pNew;
    return nullptr;
}

int GetCountMonsterList(const MonsterList2& list)
{
    int count{};
    for (Monster2* i = list.pHead; i != nullptr; i = i->pNext)
    {
        count++;
    }
    return count;
}

void PrintMonsterList(const MonsterList2& list)
{
    for (Monster2* i = list.pHead; i != nullptr; i = i->pNext)
    {
        std::cout << "--------------" << std::endl;
        std::cout << "name : " << i->name << std::endl
                  << "hp : "    << i->hp << std::endl;
    }
}

void PrintListRecursive(Monster2* monster)
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

Monster2* FindMonster(const MonsterList2& list, const char* name)
{
    for (Monster2* p = list.pHead; p != nullptr; p = p->pNext)
    {
        if (strcmp(p->name, name) == 0)
        {
            return p;
        }
    }
    return nullptr;
}

void DeleteAll(MonsterList2& list)
{
    Monster2* p = list.pHead;
    Monster2* pNext{};
    while (p != nullptr)
    {
        pNext = p->pNext;
        delete p;
        p = pNext;
    }

    list.pHead = nullptr;
    list.pTail = nullptr;
}

bool DeleteMonster(MonsterList2& list, const char* name)
{
    Monster2* pCurrent = list.pHead;
    Monster2* pPrevious{};
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
        //???? ?????? ???? ??
        list.pHead = list.pTail = nullptr;
    }
    else if (list.pHead == pCurrent)
    {
        // ?? ???? ????
        list.pHead = pCurrent->pNext;
        pCurrent->pNext->pPrev = nullptr;
    }
    else if (list.pTail == pCurrent)
    {
        // ?????? ????
        list.pTail = pPrevious;
        pPrevious->pNext = nullptr;

    }
    else
    {
        // ?????? ???? ??
        pPrevious->pNext = pCurrent->pNext;
        pCurrent->pNext->pPrev = pCurrent->pPrev;
        pCurrent->pPrev->pNext = pCurrent->pNext;

    }
    delete pCurrent;
    return true;
}
