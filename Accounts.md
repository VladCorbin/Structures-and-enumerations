#include <iostream>
#include <string>
#include <Windows.h>

struct Accounts
{
	int Number;
	std::string AccName;
	int Balance;
};



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num;
	std::string name;
	int bal;
	int newbal;
	std::cout << "Введите номер счёта: " << std::endl;
	std::cin >> num;
	std::cout << "Введите имя владельца: " << std::endl;
	std::cin >> name;
	std::cout << "Введите баланс: " << std::endl;
	std::cin >> bal;

	Accounts bank = { num, name, bal };

	std::cout << "Введите новый баланс: " << std::endl;
	std::cin >> newbal;

	bank.Balance = newbal;
	
	std::cout << "Ваш счёт: " << bank.Number << " " << bank.AccName << " " << bank.Balance << std::endl;

	return EXIT_SUCCESS;
}