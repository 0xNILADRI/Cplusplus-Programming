#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,nback,sum=0;
    cout<<"Enter the number : ";
    cin>>num;
    nback = num;
    while(num){
        sum += pow(num%10,3);
        num /= 10;
    }
    if (sum == nback) cout<<"Armstrong Number"<<endl;
    else cout<<"Not armstrong number"<<endl;
    return 0;
}