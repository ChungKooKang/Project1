#pragma once
const int NAME_LENGTH{ 16 };
struct Monster // Single Linked list
{
	char name[NAME_LENGTH];
	int hp;

	Monster* pNext;
};
struct Monster2 // Double Linked List
{
	char name[NAME_LENGTH];
	int hp;

	Monster2* pNext;
	Monster2* pPrev;
};