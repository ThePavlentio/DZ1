#include <iostream>
#include <string>
#include "Windows.h"

struct Account
{
	int number{};
	std::string name{};
	float balance{};
};

void new_balance(Account& p, float newBalance)
{
	p.balance = newBalance;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Account p;
	std::cout << "¬ведите номер счета: ";
	std::cin >> p.number;
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> p.name;
	std::cout << "¬ведите баланс: ";
	std::cin >> p.balance;
	std::cout << "¬ведите новый баланс: ";
	float newBalance{};
	std::cin >> newBalance;

	new_balance(p, newBalance);

	std::cout << "¬аша счет: " << p.name << ", " << p.number << ", " << p.balance;

	return 0;
}