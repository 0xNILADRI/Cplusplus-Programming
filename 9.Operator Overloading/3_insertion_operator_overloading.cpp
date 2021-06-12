#include <iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;
    public:
        Complex (int real=0, int imaginary=0){
            this->real = real;
            this->imaginary = imaginary;
        }

        // insertion overloading
friend ostream & operator<<(ostream &out, Complex &c1);
};

ostream & operator<<(ostream &out, Complex &c1){
    out<<c1.real<<"+i"<<c1.imaginary;
    return out;
}

int main(){
    Complex c(10,5);
    cout<<c<<endl;
    return 0;
}