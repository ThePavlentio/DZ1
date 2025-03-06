#include <iostream>
#include <string>

enum Months { january = 1, february, march, april, may, june, july, august, september, october, november, december };

int main()
{
    setlocale(LC_ALL, "rus");

    int userInput{};
    std::cout << "Введите номер месяца: ";
    std::cin >> userInput;

    if (userInput != 0)
    {
        while (userInput != 0)
        {
            Months month{ static_cast<Months>(userInput) };

            switch (month)
            {
            case Months::january:
                std::cout << "Январь." << std::endl;
                break;
            case Months::february:
                std::cout << "Февраль." << std::endl;
                break;
            case Months::march:
                std::cout << "Март." << std::endl;
                break;
            case Months::april:
                std::cout << "Апрель." << std::endl;
                break;
            case Months::may:
                std::cout << "Май." << std::endl;
                break;
            case Months::june:
                std::cout << "Июнь." << std::endl;
                break;
            case Months::july:
                std::cout << "Июль." << std::endl;
                break;
            case Months::august:
                std::cout << "Август." << std::endl;
                break;
            case Months::september:
                std::cout << "Сентябрь." << std::endl;
                break;
            case Months::october:
                std::cout << "Октябрь." << std::endl;
                break;
            case Months::november:
                std::cout << "Ноябрь." << std::endl;
                break;
            case Months::december:
                std::cout << "Декабрь." << std::endl;
                break;
            default:
                std::cout << "Неправильный номер!" << std::endl;
                break;
            }
            std::cout << "Введите номер месяца: ";
            std::cin >> userInput;
        }
    }

    std::cout << "До свидания!" << std::endl;

    return 0;
}

