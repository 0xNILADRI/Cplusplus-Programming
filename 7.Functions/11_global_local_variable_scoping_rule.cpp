#include <iostream>
using namespace std;

int g = 10; // global variable

int main(){
    int g = 15;
    {
        int g = 20;
        cout<<g<<endl; // nearest scope g = 20
    }
    cout<<g<<endl; // nearest scope g = 15
    cout<<::g<<endl; // global identifier used g = 10
    return 0;
}