#include <iostream>
#include <string>
#include <Windows.h>

struct Address
{
    std::string city; // Город
    std::string street; // Улица
    int houseNumber; // Номер дома
    int apartment; // Номер квартиры
    int index; // Почтовый индекс
};

void printAddress(const Address& address)
{
    std::cout << "Город: " << address.city << std::endl;
    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Номер дома: " << address.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << address.apartment << std::endl;
    std::cout << "Индекс: " << address.index << std::endl << std::endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Address address1{ "Москва", "Арбат", 12, 8, 123456 };
    Address address2{ "Ижевск", "Пушкина", 59, 143, 953769 };

    printAddress(address1);
    printAddress(address2);

    return EXIT_SUCCESS;
}