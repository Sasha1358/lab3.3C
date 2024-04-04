///  Source.cpp
#include <iostream>
#include "Rational.h"
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Rational z1, z2, z3;

    std::cout << "������ �������� ��� z1:" << std::endl;
    std::cin >> z1;

    std::cout << "z1: " << z1 << ", ��������: " << z1.value() << std::endl;
    z1.Reduce();
    std::cout << "�������� �������� z1: " << z1 << std::endl;

    std::cout << "������ �������� ��� z2:" << std::endl;
    std::cin >> z2;

    std::cout << "z2: " << z2 << ", ��������: " << z2.value() << std::endl;

    // ���������
    z3 = z1 + z2;
    std::cout << "��������� ��������� z1 � z2: " << z3 << ", ���� ��������: " << z3.value() << std::endl;

    // ³�������
    z3 = z1 - z2;
    std::cout << "��������� �������� z1 � z2: " << z3 << ", ���� ��������: " << z3.value() << std::endl;

    // ��������
    z3 = z1 * z2;
    std::cout << "��������� �������� z1 � z2: " << z3 << ", ���� ��������: " << z3.value() << std::endl;

    // ��������� �� ��������� 
    ++z3;
    std::cout << "ϳ��� ����������� ����������: " << z3 << std::endl;

    Rational objPostInc = z3++;
    std::cout << "ϳ��� ������������ ����������: " << z3 << " (���������� ��'���: " << objPostInc << ")" << std::endl;

    --z3;
    std::cout << "ϳ��� ����������� ����������: " << z3 << std::endl;

    Rational objPostDec = z3--;
    std::cout << "ϳ��� ������������ ����������: " << z3 << " (���������� ��'���: " << objPostDec << ")" << std::endl;

    std::cout << "ʳ������ ��'����: " << Object::getObjectCount() << std::endl;
    return 0;
}
