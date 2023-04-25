// Homework2.8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

int function(std::string str, int forbidden_length) {
    if (str.length() == forbidden_length) {
        throw std::exception("bad_length");
    }
    else {
        return static_cast<int>(str.length());
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int forbidden_lenth;
    std::string str;

    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_lenth;

    try {
        while (1) {
            std::cout << "Введите слово: ";
            std::cin >> str;
            std::cout << "Длина слова '" << str << "' равна " << function(str, forbidden_lenth) << std::endl;
        }
    }

    catch(const std::exception& e){
        std::cout << "Exception happened. Message: " << e.what() << std::endl;
    }
}