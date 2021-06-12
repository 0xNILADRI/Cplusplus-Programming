#include <iostream>
using namespace std;

class Complex{
    
    public:
        int real;
        int imaginary;

        // constructor 
        Complex (int real=0, int imaginary=0){
            this->real = real;
            this->imaginary = imaginary;
        }

        // operator overloading
        Complex operator +(Complex x){
            Complex temp;
            temp.real = this->real + x.real;
            temp.imaginary = this->imaginary + x.imaginary;
            return temp;
        }

};

int main(){
    Complex c1(4,7);
    Complex c2(6,3);
    Complex c3;
    c3 = c1 + c2;
    cout<<"Sum : "<<c3.real<<" + i"<<c3.imaginary<<endl;
    return 0;
}