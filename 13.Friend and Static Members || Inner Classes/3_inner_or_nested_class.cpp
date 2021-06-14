#include <iostream>
using namespace std;

class Outer{
    public:
        void fun(){
            i.display();
        }
        class Inner{
            public:
                void display(){
                    cout<<"display inner"<<endl;
                }
        };
        Inner i; // only after creating a class we can create a object
};

int main(){
    Outer o;
    o.fun();
    Outer::Inner i; // since it is public 
    i.display();
    return 0;
}