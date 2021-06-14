#include <iostream>
using namespace std;

int main(){
    char s[50], s2[50];

    cout<< "Please enter your full name : " << endl;
    cin.get(s,50);
    cout<<"Hello "<<s<<endl;

    cin.ignore();

    cout<< "Please enter your full name again: " << endl;
    cin.getline(s2,50);
    cout<<"Hello "<<s2<<endl;

    return 0;
}
