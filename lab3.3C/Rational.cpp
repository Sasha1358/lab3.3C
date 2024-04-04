///  Rational.cpp
#include "Rational.h"
#include <sstream>

Rational::Rational() : numerator(0), denominator(1) {}
Rational::Rational(int a, int b) : numerator(a), denominator(b) {
    Reduce();
}
Rational::Rational(const Rational& other) : numerator(other.numerator), denominator(other.denominator) {}
Rational::~Rational() {}

double Rational::GetA() const {
    return numerator;
}
double Rational::GetB() const {
    return denominator;
}
void Rational::SetA(int value) {
    numerator = value;
}
void Rational::SetB(int value) {
    denominator = value;
}

void Rational::Reduce() {
    int gcd = 1;
    int smaller = (numerator < denominator) ? numerator : denominator;

    for (int i = 2; i <= smaller; ++i) {
        if (numerator % i == 0 && denominator % i == 0) {
            gcd = i;
        }
    }

    if (gcd > 1) {
        numerator /= gcd;
        denominator /= gcd;
    }
}
double Rational::value() const {
    return static_cast<double>(numerator) / denominator;
}

Rational& Rational::operator=(const Rational& other) {
    if (this != &other) {
        numerator = other.numerator;
        denominator = other.denominator;
    }
    return *this;
}
Rational::operator std::string() const {
    std::ostringstream oss;
    oss << "A = " << numerator << ", B = " << denominator;
    return oss.str();
}

Rational& Rational::operator++() {
    numerator += denominator;
    Reduce();
    return *this;
}
Rational Rational::operator++(int) {
    Rational temp = *this;
    numerator += denominator;
    Reduce();
    return temp;
}
Rational& Rational::operator--() {
    numerator -= denominator;
    Reduce();
    return *this;
}
Rational Rational::operator--(int) {
    Rational temp = *this;
    numerator -= denominator;
    Reduce();
    return temp;
}

Rational operator+(const Rational& l, const Rational& r) {
    return Rational(l.numerator * r.denominator + r.numerator * l.denominator,
        l.denominator * r.denominator);
}
Rational operator-(const Rational& l, const Rational& r) {
    return Rational(l.numerator * r.denominator - r.numerator * l.denominator,
        l.denominator * r.denominator);
}
Rational operator*(const Rational& l, const Rational& r) {
    return Rational(l.numerator * r.numerator, l.denominator * r.denominator);
}

std::ostream& operator<<(std::ostream& out, const Rational& rational) {
    out << rational.GetA() << "\\" << rational.GetB();
    return out;
}
std::istream& operator>>(std::istream& in, Rational& rational) {
    int a, b;
    in >> a >> b;
    rational.SetA(a);
    rational.SetB(b);
    rational.Reduce();
    return in;
}
