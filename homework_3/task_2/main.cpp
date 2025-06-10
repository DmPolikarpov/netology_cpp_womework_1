#include "iostream"

int main ()
{
    int a, b, c;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите третье число: ";
    std::cin >> c;

    std::cout << "Результат: ";

    a > b ?
    b > c ?
    std::cout << a << " " << b << " " << c :
    std::cout << a << " " << c << " " << b
    :
    c < a ?
    std::cout << b << " " << a << " " << c :
    c > b ?
    std::cout << c << " " << b << " " << a :
    std::cout << b << " " << c << " " << a;

    return 0;
}