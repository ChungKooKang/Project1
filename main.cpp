# include <iostream>

template<typename T, typename... Types>
// Factory Pattern
T* Make(Types... args)
{
	return new T(args...);
}


int main()
{

}
