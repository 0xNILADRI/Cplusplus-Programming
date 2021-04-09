#include <iostream>
using namespace std;

int main()
{
    string name;
    cout<<"Please enter your name : \n";
    getline(cin,name);
    cout<<"Hello "<<name<<"!"<<endl;
    return 0;
}