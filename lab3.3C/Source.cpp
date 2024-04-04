///  Source.cpp
#include <iostream>
#include "Rational.h"
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Rational z1, z2, z3;

    std::cout << "Введіть значення для z1:" << std::endl;
    std::cin >> z1;

    std::cout << "z1: " << z1 << ", значення: " << z1.value() << std::endl;
    z1.Reduce();
    std::cout << "Зменшене значення z1: " << z1 << std::endl;

    std::cout << "Введіть значення для z2:" << std::endl;
    std::cin >> z2;

    std::cout << "z2: " << z2 << ", значення: " << z2.value() << std::endl;

    // Додавання
    z3 = z1 + z2;
    std::cout << "Результат додавання z1 і z2: " << z3 << ", його значення: " << z3.value() << std::endl;

    // Віднімання
    z3 = z1 - z2;
    std::cout << "Результат віднімання z1 і z2: " << z3 << ", його значення: " << z3.value() << std::endl;

    // Множення
    z3 = z1 * z2;
    std::cout << "Результат множення z1 і z2: " << z3 << ", його значення: " << z3.value() << std::endl;

    // Інкремент та декремент 
    ++z3;
    std::cout << "Після префіксного інкременту: " << z3 << std::endl;

    Rational objPostInc = z3++;
    std::cout << "Після постфіксного інкременту: " << z3 << " (тимчасовий об'єкт: " << objPostInc << ")" << std::endl;

    --z3;
    std::cout << "Після префіксного декременту: " << z3 << std::endl;

    Rational objPostDec = z3--;
    std::cout << "Після постфіксного декременту: " << z3 << " (тимчасовий об'єкт: " << objPostDec << ")" << std::endl;

    std::cout << "Кількість об'єктів: " << Object::getObjectCount() << std::endl;
    return 0;
}
