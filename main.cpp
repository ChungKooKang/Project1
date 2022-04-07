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

class Point2D
{
	friend class Warrior; // �̰� �� �� ? �̰� warrior�� ���� �ǵ� �װ��� �������ڴ� �ϴ� �� �̾
	friend void Warrior::AttackWith(Sword& word); // �̰� �ȵ� ��? �̰��� Warrior�� ���Դµ� Ȱ���ϰڴٶ�� ��
	{
		sword.mDamage *= 2;
		std::cout << "��ȭ���� :" << sword.mDamage << std::endl;
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
		std::cout << "Į�� �ֵѷ� " << sword.mDamage <<"��ŭ�� ���ظ� �־���!" << std::endl;
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
