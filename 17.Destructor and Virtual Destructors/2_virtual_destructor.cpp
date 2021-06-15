#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Constructor of Base"<<endl;
    }

    virtual ~Base(){
        cout<<"Destructor of Base"<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Constructor of derived"<<endl;
    }
    ~Derived(){
        cout<<"Destructor of derived"<<endl;
    }
};

int main(){
    Base *b = new Derived();   // base class pointer and derived class object
    delete b;                  // achieve runtime polymorphism
    return 0;
}