#include <iostream>
#include <string>
#include <Windows.h>

enum Months
{
	January = 1, //январь
	February, //февраль
	March, //март
	April, //апрель
	May, //май
	June, //июнь
	July, //июль
	August, //август
	September, //сентябрь
	October, //октябрь
	November, //ноябрь
	December, //декабрь
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int NumMonths{};
	while (true) 
	{
		std::cout << "Введите номер месяца: " << std::endl;
		std::cin >> NumMonths;

		if (NumMonths > 12 || NumMonths < 0)
		{
			std::cout << "Такого месяца не существует, попробуйте другой." << std::endl;
		}
		else
		{
			if (NumMonths != 0)
			{
				Months num = static_cast<Months>(NumMonths);

				switch (NumMonths)
				{
				case January: std::cout << "январь" << std::endl; break;
				case February: std::cout << "февраль" << std::endl; break;
				case March: std::cout << "март" << std::endl; break;
				case April: std::cout << "апрель" << std::endl; break;
				case May: std::cout << "май" << std::endl; break;
				case June: std::cout << "июнь" << std::endl; break;
				case July: std::cout << "июль" << std::endl; break;
				case August: std::cout << "август" << std::endl; break;
				case September: std::cout << "сентябрь" << std::endl; break;
				case October: std::cout << "октябрь" << std::endl; break;
				case November: std::cout << "ноябрь" << std::endl; break;
				case December: std::cout << "декабрь" << std::endl; break;
				}
			}
			else
			{
				std::cout << "До свидания!!" << std::endl;
				break;
			}
		}
	}



	return EXIT_SUCCESS;
}