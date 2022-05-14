//
// Created by studentloaner on 4/29/2022.
//
#include <iostream>
#include <string>
#include "Rational.h"

using namespace std;

Rational::Rational(int num, int denom) {
    numerator=num;
    denominator=denom;
}

Rational Rational::addFractions(Rational x, Rational y) {
    if(x.denominator != y.denominator) {
        Rational f1;
        Rational f2;
        f1.numerator = x.numerator * y.denominator;
        f1.denominator = x.denominator * y.denominator;

        f2.numerator = y.numerator * x.denominator;
        f2.denominator = y.denominator * x.denominator;

        int newnum= f1.numerator+f2.numerator;

        int newdenom= f1.denominator;

        Rational result(newnum,newdenom);
        return reduction(result);

    }
    else{
        int num= x.numerator + y.numerator;
        int denom=x.denominator;
        Rational z(num,denom);

        return reduction(z);
    }

}

Rational Rational::subtraction(Rational m, Rational n) {
    if(m.denominator != n.denominator){
        Rational b;
        Rational c;
        b.numerator= m.numerator *n.denominator;
        b.denominator= m.denominator *n.denominator;

        c.numerator=n.numerator *m.denominator;
        c.denominator=n.denominator*m.denominator;
        int k= b.numerator-c.numerator;
        int l= b.denominator;
        Rational result(k,l);
        return reduction(result);

    }
    else{
        int j= m.numerator- n.numerator;
        int o=m.denominator;
        Rational t(j,o);
        return reduction(t);
    }
}

Rational Rational::multiplying(Rational p, Rational q) {
    int g= p.numerator *q.numerator;
    int h= p.denominator * q.denominator;
    Rational d(g,h);
    return reduction(d);
}

Rational Rational::diving(Rational t, Rational y) {
 Rational ttwo=t;
 Rational flip(y.denominator, y.numerator);
 int resultnum= ttwo.numerator * flip.numerator;
 int resultdenom=ttwo.denominator *flip.denominator;
 Rational end(resultnum,resultdenom);
    return reduction(end);
}
// divide the num & denom by their GCF.
Rational Rational::reduction(Rational x) {
    int sum;
    sum= gcd(x.numerator,x.denominator);
    Rational thing;
    thing.numerator= x.numerator/sum;
    thing.denominator=x.denominator/sum;
    return thing;


}
Rational Rational::operator +(const Rational &r){
    Rational f1;
    Rational f2;
    if(this->denominator!= r.denominator){
        f1.numerator = this->numerator * r.denominator;
        f1.denominator= this->denominator * r.denominator;

        f2.numerator= r.numerator * this->denominator;
        f2.denominator=r.denominator * this->denominator;
        int newnum=f1.numerator+f2.numerator;
        int newdenom=f1.denominator;
        Rational final(newnum,newdenom);

        return reduction(final);
    }
    else{
        int n1= this->numerator+r.numerator;
        int d1=this->denominator;
        Rational done(n1,d1);
        return reduction(done);
    }
}
Rational Rational::operator-(const Rational &p) {
    if(this->denominator != p.denominator){
        Rational b;
        Rational c;
        b.numerator= this ->numerator *p.denominator;
        b.denominator= this->denominator *p.denominator;

        c.numerator=p.numerator * this->denominator;
        c.denominator=p.denominator* this->denominator;
        int k= b.numerator-c.numerator;
        int l= b.denominator;
        Rational result(k,l);
        return reduction(result);

    }
    else{
        int j= this->numerator- p.numerator;
        int o=this->denominator;
        Rational t(j,o);
        return reduction(t);
    }
}
Rational Rational::operator*(const Rational &b) {
    int g= this->numerator *b.numerator;
    int h= this->denominator * b.denominator;
    Rational d(g,h);
    return reduction(d);
}
Rational Rational::operator/(const Rational &g) {
    Rational ttwo(this->numerator, this->denominator);
    Rational flip(g.denominator, g.numerator);
    int resultnum= ttwo.numerator * flip.numerator;
    int resultdenom=ttwo.denominator *flip.denominator;
    Rational end(resultnum,resultdenom);
    return reduction(end);
}
/*Rational Rational::addFractionTwo(Rational &m) {
    return Rational(*this+m);
}*/
int Rational::gcd(int a, int b) {
    if(b!=0){
        return gcd(b,a%b);
    }
    else{
        return a;
    }
}
float Rational::returndecimal() {
    float result= (float )numerator/(denominator);
    return result;
}


void Rational::printRational() {
    if(denominator==0){
        cout<<"Error denominator is zero"<<"\n";
    } else{
        cout<<numerator<<'/'<<denominator;
    }
}
