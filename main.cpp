# include <iostream>
class Warrior
{
public:
	void AttackWith(Sword& sword)
	{
		std::cout << "Į�� �ֵѷ� " << sword.mDamage << "��ŭ�� ���ظ� �־���!" << std::endl;
	}
	void Denfend();
};

class Sword
{
	friend class Warrior; // �̰� �� �� ? �̰� warrior�� ���� �ǵ� �װ��� �������ڴ� �ϴ� �� �̾
	friend void Warrior::AttackWith(Sword& word); // �̰� �ȵ� ��? �̰��� Warrior�� ���Դµ� Ȱ���ϰڴٶ�� ��


private:
	int mDamage;
public:
	void UpgradeSword(Sword& sword);
	Sword(int dmg) : mDamage{ dmg }
	{
	}
};

void Sword::UpgradeSword(Sword& sword)
{
	sword.mDamage *= 2;
	std::cout << "��ȭ���� :" << sword.mDamage << std::endl;
}




int main()
{
	Sword shortSword(10);
	Warrior player1;
	shortSword.UpgradeSword(shortSword);
	player1.AttackWith(shortSword);
	return 0;
}
