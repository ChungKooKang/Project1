# include <iostream>

void StudyLiteral()
{
	int inputValue{};
	while (inputValue != 999)
	{
		std::cout << "bool의 값에 따른 결과" << std::endl;
		std::cout << "값을 입력하세요(999를 입력하면 종료) : " << std::endl;
		std::cin >> inputValue;
		std::cout << "결과 : " << bool(inputValue) << std::endl;
	}
	}