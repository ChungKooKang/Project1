# include "LinkedList.h"
# include <cstring>
# include <iostream>

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
