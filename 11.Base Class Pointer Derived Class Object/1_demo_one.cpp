#include<iostream>
using namespace std;

class Base{
    public:
        void func1(){
            cout<<"function 1 base "<<endl;
        }
};

class  Derived:public Base{
    public:
        void func2(){
            cout<<"function 2 derived"<<endl;
        }
};

int main(){
    Derived d;
    Base *ptr = &d;
    ptr->func1();
    // ptr->func2(); // not possible

    /*Base b;
    Derived *p = &b; // not possible
    */
    return 0;
}