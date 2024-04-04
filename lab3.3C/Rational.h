///  Rational.h
#pragma once
#include "Object.h"
#include <iostream>

class Rational : public Object {
private:
    int numerator;
    int denominator;

public:
    Rational();
    Rational(int a, int b);
    Rational(const Rational& other);
    ~Rational();

    double GetA() const;
    double GetB() const;
    void SetA(int value);
    void SetB(int value);

    void Reduce();
    double value() const;

    Rational& operator=(const Rational& other);
    operator std::string() const;
    Rational& operator++();
    Rational operator++(int);
    Rational& operator--();
    Rational operator--(int);

    friend Rational operator+(const Rational& l, const Rational& r);
    friend Rational operator-(const Rational& l, const Rational& r);
    friend Rational operator*(const Rational& l, const Rational& r);

    friend std::ostream& operator<<(std::ostream& out, const Rational& rational);
    friend std::istream& operator>>(std::istream& in, Rational& rational);
};


