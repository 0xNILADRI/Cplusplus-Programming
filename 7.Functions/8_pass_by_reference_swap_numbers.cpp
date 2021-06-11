#include <iostream>
using namespace std;

void swap(int &a, int &b){
    b=(a+b)-(a=b);
}

int main(){
    int firstNumber=10,secondNumber=20;
    swap(firstNumber,secondNumber);
    cout<<"First Number : "<<firstNumber<<endl<<"Second Number : "<<secondNumber<<endl;
    return 0;
}