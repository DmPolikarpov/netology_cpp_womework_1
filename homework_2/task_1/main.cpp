#include <iostream>

int main() {
    int num;
    setlocale(LC_CTYPE, "rus");
    std::cout << "Введите число:\n";
    std::cin >> num;
    std::cout << "Вы ввели:\n";
    std::cout << num << "\n";

    return 0;
}
