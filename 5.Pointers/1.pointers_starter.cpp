#include <iostream>
using namespace std;
int main(){
    int a=54;
    int *p = &a;

    cout<<a<<endl;  // value of a
    cout<<&a<<endl; // address of a 
    cout<<p<<endl;  // value stored in p (address of a)
    cout<<&p<<endl; // address of p
    cout<<*p<<endl; // dereferencing 
    return 0;
}