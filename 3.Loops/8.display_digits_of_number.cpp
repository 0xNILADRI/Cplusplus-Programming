#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    while(num){
        cout<<num%10<<endl;
        num /= 10;
    }
    return 0;
}