#include <iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;
    public:

        //contructor
        Complex(int real=0, int imaginary=0) {
            this->real = real;
            this->imaginary = imaginary;
        }

        // accessor
        void display(){
            cout<<real<<" + i"<<imaginary<<endl;
        }

        // friend operator overloading
        friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}

int main(){
    Complex c1(7,8),c2(12,14),c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}
