#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int main(){
    int firstNumber=10, secondNumber=25;
    cout<<"Sum of two numbers is "<<add(firstNumber,secondNumber)<<endl;
    return 0;
}