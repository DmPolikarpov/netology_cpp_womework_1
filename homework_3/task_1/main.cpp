#include "iostream"

int main()
{
    // Оператор || (ИЛИ)
    std::cout << "Оператор: ||" << std::endl;
    // true true
    bool a = true, b = true;
    std::cout << std::boolalpha << a << " " << b << " " <<  (a || b) << std::endl;
    // false true
    a = false, b = true;
    std::cout << a << " " << b << " " <<  (a || b) << std::endl;
    // true false
    a = true, b = false;
    std::cout << a << " " << b << " " <<  (a || b) << std::endl;
    // false false
    a = false, b = false;
    std::cout << a << " " << b << " " <<  (a || b) << std::endl;

    // Оператор && (И)
    std::cout << "\nОператор: &&" << std::endl;
    // true true
    a = true, b = true;
    std::cout << a << " " << b << " " <<  (a && b) << std::endl;
    // false true
    a = false, b = true;
    std::cout << a << " " << b << " " <<  (a && b) << std::endl;
    // true false
    a = true, b = false;
    std::cout << a << " " << b << " " <<  (a && b) << std::endl;
    // false false
    a = false, b = false;
    std::cout << a << " " << b << " " <<  (a && b) << std::endl;
}