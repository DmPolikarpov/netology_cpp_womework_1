#include "iostream"
#include <windows.h>

int main()
{
    std::string zodiacSign, gender;
    int age;
    setConsoleCP(1251);
    setConsoleOutputCP(1251);
    std::cout << "Введите пол:" << std::endl;
    std::cin >> gender;
    std::cout << "Введите знак зодиака:" << std::endl;
    std::cin >> zodiacSign;
    std::cout << "Введите возраст:" << std::endl;
    std::cin >> age;
    std::cout << "\nВаше предсказание:" << std::endl;

    int signNumber = 0;
    if  (zodiacSign == "рак" || zodiacSign == "рыбы" || zodiacSign == "скорпион")
    {
        signNumber = 1;
    }
    else if (zodiacSign == "телец" || zodiacSign == "дева" || zodiacSign == "козерог")
    {
        signNumber = 2;
    }

    if (gender == "м" && signNumber == 1 && age < 40)
    {
        std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным." << std::endl;
    }
    else if (gender == "ж" && signNumber == 2 && (age > 15 || age < 30))
    {
        std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок. Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех." << std::endl;
    }
    else 
    {
        std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << std::endl;
    }
    return 0;
}