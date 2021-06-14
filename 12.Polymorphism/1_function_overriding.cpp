#include<iostream>
using namespace std;

class Parent{
    public:
        void display(){
            cout<<"display of base"<<endl;
        }
};

class Child:public Parent{
    public:
        void display(){
            cout<<"display of child"<<endl;
        }
};

int main(){
    Parent p;
    p.display(); // parent display function

    Child c;
    c.display(); // child display fucntion
    c.Parent::display(); // calling parent display class using scope operator

    return 0;
}