# include <iostream>

void StudyLiteral()
{
	int inputValue{};
	while (inputValue != 999)
	{
		std::cout << "bool�� ���� ���� ���" << std::endl;
		std::cout << "���� �Է��ϼ���(999�� �Է��ϸ� ����) : " << std::endl;
		std::cin >> inputValue;
		std::cout << "��� : " << bool(inputValue) << std::endl;
	}
	}