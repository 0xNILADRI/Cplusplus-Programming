#include <iostream>
using namespace std;

class Test{
    public:
    int *p;
    // constructor 
    Test(){
        p = new int[10];
        cout<<"Constructor of Test"<<endl;
    }

    // destructor 
    ~Test(){
        delete []p;
        cout<<"Destructor of Test"<<endl;
    }
};

void fun(){
    Test *ptr = new Test();   // if pointer is created in heap; i.e., if new keyword is used
    delete ptr;               // delete keyword should be used to deallocate the memory as destructor 
}                             // is not called by default during dynamic allocation and delete must be used.

int main(){
    fun();
}