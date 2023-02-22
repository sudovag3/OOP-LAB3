#include "fraction.h"

Fraction::Fraction(int num = 0, int den = 1) {
        numerator = num;
        denominator = den;
    }

int Fraction::gcd() {
        return gcd(numerator, denominator);
    }

int Fraction::gcd(int a, int b) {
        if (b == 0) {
            return a;
        } else {
            return gcd(b, a % b);
        }
    }

Fraction Fraction::operator+(const Fraction &f) {
    Fraction result;
    result.numerator = numerator * f.denominator + f.numerator * denominator;
    result.denominator = denominator * f.denominator;
    return result;
}

Fraction Fraction::operator-(const Fraction &f) {
    Fraction result;
    result.numerator = numerator * f.denominator - f.numerator * denominator;
    result.denominator = denominator * f.denominator;
    return result;
}

Fraction Fraction::operator*(const Fraction &f) {
    Fraction result;
    result.numerator = numerator * f.numerator;
    result.denominator = denominator * f.denominator;
    return result;
}

Fraction Fraction::operator/(const Fraction &f) {
    Fraction result;
    result.numerator = numerator * f.denominator;
    result.denominator = denominator * f.numerator;
    return result;
}

ostream& operator<<(ostream& os, const Fraction& f) {
        os << f.numerator << "/" << f.denominator;
        return os;
    }