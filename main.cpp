# include <iostream>

class CPU
{

};

class GraphicCard
{

};
class Keyboard
{

};
class Notebook
{
	CPU mCPU;				// is-part-of : �������ȭ
	Keyboard* mKeyboard;	// has-a      : ��� ������ ����ȭ
	GraphicCard mGPU;
};
int main()
{
	Notebook gram, mackbook, omem;
	Keyboard logitech;

	gram->Keyboard = logitech;
	

	return 0;
}
