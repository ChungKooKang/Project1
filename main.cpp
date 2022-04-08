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
	CPU mCPU;				// is-part-of : 멤버변수화
	Keyboard* mKeyboard;	// has-a      : 멤버 포인터 변수화
	GraphicCard mGPU;
};
int main()
{
	Notebook gram, mackbook, omem;
	Keyboard logitech;

	gram->Keyboard = logitech;
	

	return 0;
}
