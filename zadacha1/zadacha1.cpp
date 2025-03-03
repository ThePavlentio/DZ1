#include <iostream>
#include <string>

enum Months{завершение, январь, февраль, март, апрель, май, июнь, июль, август, сентябрь, октябрь, ноябрь, декабрь };

int main()
{
    setlocale(LC_ALL, "rus");

    int userInput{};
    std::cout << "Введите номер месяца: ";
    std::cin >> userInput;
    Months month{ static_cast<Months>(userInput) };

    if (month != Months::завершение)
    {
        while (userInput != Months::завершение)
        {
            switch (userInput)
            {
            case Months::январь:
                std::cout << "Январь." << std::endl;
                break;
            case Months::февраль:
                std::cout << "Февраль." << std::endl;
                break;
            case Months::март:
                std::cout << "Март." << std::endl;
                break;
            case Months::апрель:
                std::cout << "Апрель." << std::endl;
                break;
            case Months::май:
                std::cout << "Май." << std::endl;
                break;
            case Months::июнь:
                std::cout << "Июнь." << std::endl;
                break;
            case Months::июль:
                std::cout << "Июль." << std::endl;
                break;
            case Months::август:
                std::cout << "Август." << std::endl;
                break;
            case Months::сентябрь:
                std::cout << "Сентябрь." << std::endl;
                break;
            case Months::октябрь:
                std::cout << "Октябрь." << std::endl;
                break;
            case Months::ноябрь:
                std::cout << "Ноябрь." << std::endl;
                break;
            case Months::декабрь:
                std::cout << "Декабрь." << std::endl;
                break;
            case Months::завершение:
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

