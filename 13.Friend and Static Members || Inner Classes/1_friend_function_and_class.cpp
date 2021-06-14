#include<iostream>
using namespace std;

class Patience;
class Test{
    private: int a;
    protected: int b;
    public: int c;
    
    // friend for function
    friend void func();

    // friend for class
    friend Patience;
};

void func(){
    Test te;
    te.a = 40;
    te.b = 40;
    te.c = 40;

    cout<<te.a<<endl;
    cout<<te.b<<endl;
    cout<<te.c<<endl;
}

class Patience{
    public:
        Test t;
        void fun(){
            t.a = 10;
            t.b = 20;
            t.c = 20;
        }
        void display(){
            cout<<t.a<<endl;
            cout<<t.b<<endl;
            cout<<t.c<<endl;
        }
};

int main(){
    Test t;
    func();

    Patience p;
    p.fun();
    p.display();

    return 0;
}