#include <iostream>
using namespace std;

class Rational{
    int numerator;
    int denominator;

    public:
        // constructor
        Rational(int numerator=0, int denominator=0){
            this->numerator = numerator;
            this->denominator = denominator;
        }

        // operator overloading
        friend Rational operator+(Rational r1, Rational r2);

        friend ostream & operator<<(ostream &out, Rational &r);
};

Rational operator+(Rational r1, Rational r2){
    Rational r3;
    r3.numerator = r1.numerator*r2.denominator + r2.numerator*r1.denominator;
    r3.denominator = r1.denominator * r2.denominator;
    int m = r3.numerator;
    int n = r3.denominator;
    // finding gcd 
    while(1){
        if(m > n) m -= n;
        else if (n > m) n -= m;
        else break;
    }
    r3.numerator /= m;
    r3.denominator /= m;
    return r3;
}

ostream & operator<<(ostream &out,Rational &r){
    out<<r.numerator<<"/"<<r.denominator;
    return out;
}

int main(){
    Rational r1(13,5),r2(8,2),r3;
    r3 = r1 + r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
    return 0;
}