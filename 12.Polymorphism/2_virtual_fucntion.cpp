#include <iostream>
using namespace std;

class Parent{
    public:
        virtual void func(){
            cout<<"function of parent"<<endl;
        }
};

class Child:public Parent{
    public:
        void func(){
            cout<<"function of child"<<endl;
        }
};

int main(){
    Parent *ptr = new Child();
    ptr->func(); // normally without the virtual keyword fucntion of Parent class would have been called because of the pointer.
    return 0;
}