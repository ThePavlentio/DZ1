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

	std::cout << "�����: " << n.city << std::endl;
	std::cout << "�����: " << n.street << std::endl;
	std::cout << "���: " << n.building << std::endl;
	std::cout << "��������: " << n.aparts << std::endl;
	std::cout << "������: " << n.index << std::endl;
}

int main()
{

	Address test1 = { "������", "������", 78, 23, 123456 };

	print_address(test1);

	return 0;
}