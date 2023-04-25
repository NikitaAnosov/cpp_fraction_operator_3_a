#include "Fraction.hpp"

using namespace ariel;

Fraction Fraction::reduceGCD(int& numerator2, int& denominator2) const
{
    int gcd = std::__gcd(numerator2, denominator2);
    numerator2 /= gcd;
    denominator2 /= gcd;
    return Fraction(numerator2,denominator2);
}

Fraction Fraction::operator+(const Fraction &other) const
{
    int new_numerator = (this->_numerator * other._denominator) + (other._numerator * this->_denominator);
    int new_denominator = this->_denominator * other._denominator;
    return reduceGCD(new_numerator, new_denominator);
}



        //++ / --
        Fraction& Fraction::operator++() { return *this; }                        // Prefix
        Fraction Fraction::operator++(int forComplier) { return Fraction(1, 2); } // Postfix
        Fraction& Fraction::operator--() { return *this; }                        // Prefix
        Fraction Fraction::operator--(int forComplier) { return Fraction(1, 2); } // Postfix