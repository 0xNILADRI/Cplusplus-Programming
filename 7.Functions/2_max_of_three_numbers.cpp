#include <iostream>
using namespace std;

int Max(int a, int b, int c){
    return a>b?(a>c?a:c):(b>c?b:c);
}

int main(){
    int firstNumber,secondNumber,thirdNumber;
    cout<<"Enter three numbers ";
    cin>>firstNumber>>secondNumber>>thirdNumber;
    cout<<"Maximum number : "<<Max(firstNumber,secondNumber,thirdNumber)<<endl;
    return 0;
}