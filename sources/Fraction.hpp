#ifndef FRACT_HPP
#define FRACT_HPP
#include <iostream>
#include <algorithm>

/*
    # The + operator to add two fractions and return their sum as another fraction in reduced form.
    # The - operator to subtract two fractions and return their difference as another fraction in reduced form.
    # The * operator to multiply two fractions and return their product as another fraction in reduced form.
    # The / operator to divide two fractions and return their quotient as another fraction in reduced form.
    # The == operator to compare two fractions for equality and return true or false.
    # All comparison operations (>,<,>=,<=)
    # The ++ and -- operator that adds (or substracts) 1 to the fraction. implement both pre and post fix.
    # The << operator to print a fraction to an output stream in the format “numerator/denominator”.
    # The >> operator to read a fraction from an input stream by taking two integers as input.
    # All operators should work on both sides on fractions and floats type variables. 
      on a float var you need use up to 3 digits beyond the desimal point for acuracy.
*/

namespace ariel{
    class Fraction{
        private:
            int _numerator, _denominator;
        public:
            Fraction(const int& numerator, const int& denominator) 
                    : _numerator(numerator), _denominator(denominator){};
            // reduce the fraction using GCD
            Fraction reduceGCD(int& numerator2, int& denominator2) const;
            //getters
            int get_numerator() const {return _numerator ;};
            int get_denominator() const {return _denominator ;};
            //operators
            Fraction operator+(const Fraction& other) const;
            Fraction operator+(const float& num) const{return Fraction(1,2);};
            friend Fraction operator+(const float& num, const Fraction& other){return Fraction(1,2);};

            Fraction operator-(const Fraction& other) const{return Fraction(1,2);};
            Fraction operator-(const float& num) const{return Fraction(1,2);};
            friend Fraction operator-(const float& num, const Fraction& other){return Fraction(1,2);};

            Fraction operator*(const Fraction& other) const{return Fraction(1,2);};
            Fraction operator*(const float& num) const{return Fraction(1,2);};
            friend Fraction operator*(const float& num, const Fraction& other){return Fraction(1,2);};

            Fraction operator/(const Fraction& other) const{return Fraction(1,2);};
            Fraction operator/(const float& num) const{return Fraction(1,2);};
            friend Fraction operator/(const float& num, const Fraction& other){return Fraction(1,2);};
            
            //if operators
            bool operator==(const Fraction& other) const{return false;};
            bool operator==(const float& num) const{return false;};
            friend bool operator==(const float& num, const Fraction& other){return false;};

            bool operator>(const Fraction& other) const{return false;};
            bool operator>(const float& num) const{return false;};
            friend bool operator>(const float& num, const Fraction& other){return false;};
   
            bool operator<(const Fraction& other) const{return false;};
            bool operator<(const float& num) const{return false;};
            friend bool operator<(const float& num, const Fraction& other){return false;};

            bool operator>=(const Fraction& other) const{return false;};
            bool operator>=(const float& num) const{return false;};
            friend bool operator>=(const float& num, const Fraction& other){return false;};

            bool operator<=(const Fraction& other) const{return false;};
            bool operator<=(const float& num) const{return false;};
            friend bool operator<=(const float& num, const Fraction& other){return false;};

            //++ / --
            Fraction& operator++(); //Prefix: ++n
            Fraction operator++(int); //Postfix: n++
            Fraction& operator--(); //Prefix: --n
            Fraction operator--(int);//Postfix: n--
            // friend input/output
            friend std::ostream& operator<<(std::ostream& output, const Fraction& other){return (output << "f");}
            friend std::istream& operator>>(std::istream& input, const Fraction& other)
            {
                char f = 'f';
                return (input >> f);
            }
    };
}

#endif