#include <iostream>
#include <string>

struct Address
{
	std::string city{};
	std::string street{};
	int building{};
	int aparts{};
	int index{};
};

void print_address(Address& n)
{
	setlocale(LC_ALL, "rus");

	std::cout << "Город: " << n.city << std::endl;
	std::cout << "Улица: " << n.street << std::endl;
	std::cout << "Дом: " << n.building << std::endl;
	std::cout << "Квартира: " << n.aparts << std::endl;
	std::cout << "Индекс: " << n.index << std::endl;
}

int main()
{

	Address test1 = { "Москва", "Ленина", 78, 23, 123456 };

	print_address(test1);

	return 0;
}