#include <iostream>
#include <string>

struct Month
{
    std::string name;
};

int main()
{
    setlocale(LC_ALL, "rus");

    Month* month_array = new Month[13];
    month_array[0].name = "До свидания!";
    month_array[1].name = "Январь";
    month_array[2].name = "Февраль";
    month_array[3].name = "Март";
    month_array[4].name = "Апрель";
    month_array[5].name = "Май";
    month_array[6].name = "Июнь";
    month_array[7].name = "Июль";
    month_array[8].name = "Август";
    month_array[9].name = "Сентябрь";
    month_array[10].name = "Октябрь";
    month_array[11].name = "Ноябрь";
    month_array[12].name = "Декабрь";

    int userInput{};
    std::cout << "Введите номер месяца: ";
    std::cin >> userInput;

    while (userInput < 0 || userInput > 12)
    {
        std::cout << "Неправильный номер!" << std::endl;
        std::cout << std::endl;
        std::cout << "Введите номер месяца: ";
        std::cin >> userInput;
    }

    if (userInput == 0)
    {
        std::cout << month_array[0].name << std::endl;
        return 0;
    }

    else
    {
        std::cout << month_array[userInput].name << std::endl;
        return 0;
    }

    return 0;
}

