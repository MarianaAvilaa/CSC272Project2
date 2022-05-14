//
// Created by studentloaner on 4/28/2022.
//
#include <iostream>
#include <string>
using namespace std;
#ifndef CSC272PROJECT2_RATIONAL_H
#define CSC272PROJECT2_RATIONAL_H
#endif //CSC272PROJECT2_RATIONAL_H

class Rational {

public:
    Rational(int x=0,int y=1);
    Rational addFractions(Rational x, Rational y);
    Rational subtraction(Rational m, Rational n);
    Rational multiplying( Rational p, Rational q);
    Rational diving(Rational t, Rational y);
    float returndecimal();
    void printRational();

    Rational operator+(const Rational &r);
    Rational operator-(const Rational &p);
    Rational operator*(const Rational &b);
    Rational operator/(const Rational &g);
private:
    int numerator;
    int denominator;
    Rational reduction(Rational x);
    int gcd(int a,int b);

};

