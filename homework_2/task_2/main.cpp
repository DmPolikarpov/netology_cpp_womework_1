#include <iostream>
#include <windows.h>

int main() {

    std::string anyWord;
    setConsoleCP(1251);
    setConsoleOutputCP(1251);
    std::cout << "Введите слово:\n";
    std::cin >> anyWord;
    std::cout << "Вы ввели:\n";
    std::cout << anyWord << "\n";
    return 0;
}