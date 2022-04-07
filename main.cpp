# include <iostream>
class Warrior
{
public:
	void AttackWith(Sword& sword)
	{
		std::cout << "칼을 휘둘러 " << sword.mDamage << "만큼의 피해를 주었다!" << std::endl;
	}
	void Denfend();
};

class Point2D
{
	friend class Warrior; // 이건 됨 왜 ? 이건 warrior가 나올 건데 그것을 가져오겠다 하는 것 이어서
	friend void Warrior::AttackWith(Sword& word); // 이거 안됨 왜? 이것은 Warrior가 나왔는데 활용하겠다라는 뜻
	{
		sword.mDamage *= 2;
		std::cout << "강화성공 :" << sword.mDamage << std::endl;
	}

private :
	int mDamage;
public :
	Sword(int dmg) : mDamage{ dmg }
	{

class Warrior
{
public :
	void AttackWith(Sword& sword)
	{
		std::cout << "칼을 휘둘러 " << sword.mDamage <<"만큼의 피해를 주었다!" << std::endl;
	}
	void Denfend();
};


int main()
{
	Sword shortSword(10);
	Warrior player1;
	UpgradeSword(shortSword);
	player1.AttackWith(shortSword);
	return 0;
}
