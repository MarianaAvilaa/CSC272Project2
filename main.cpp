#include <iostream>
using namespace std;
#include "Rational.h"
int main() {
    Rational x(1,4);
    Rational y(1,4);
   Rational sum;
    sum= x.addFractions(x,y);
    cout<<"Adding Fraction :";
    sum.printRational();
    cout<<endl;
   Rational thing(1,5);
    Rational thingtwo(2,3);
     Rational done= thing.subtraction(thing,thingtwo);
    cout <<endl;
     cout<<"Subtracting fractions:";
    cout <<endl;
    done.printRational();
    cout<<endl;
    cout<< "Multiplying fractions:"<<endl;
    Rational q(1,2);
    Rational w(3,5);
    Rational donetwo= q.multiplying(q,w);
    donetwo.printRational();
    cout<<endl;
    cout<<"Dividing Fractions"<<endl;
    Rational last= q.diving(q,w);
    last.printRational();
    cout<<endl;
   /*cout<<"Decimal:" <<last.returndecimal();
   cout<<endl;*/
   cout<<"Overloading Operator:Addition "<<endl;
   Rational three;
   three=x + y;
   three.printRational();
   cout<<endl;
   cout<<"Overloading Operatior: Subtraction :"<<endl;
   Rational subthree;
   subthree=thing-thingtwo;
   subthree.printRational();
   cout<<endl;
   cout<<"Oveloading Operator: Multiply:"<<endl;
   Rational multhree;
   multhree=q *w;
   multhree.printRational();
   cout<<endl;
   cout<<"Overloading Operator: Division:"<<endl;
   Rational divthree;
   divthree=q/w;
   divthree.printRational();


    return 0;
}
