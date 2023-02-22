#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {    
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int num, int den);

        friend ostream& operator<<(ostream& os, const Fraction& f);

        Fraction operator+(const Fraction &f);

        Fraction operator-(const Fraction &f);

        Fraction operator*(const Fraction &f);

        Fraction operator/(const Fraction &f);
        
        int gcd();
        int gcd(int a, int b);

};

#endif