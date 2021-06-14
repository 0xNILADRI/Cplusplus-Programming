#include <iostream>
using namespace std;
int main(){
    int num,reversedNum=0;
    cout<<"Enter the number : ";
    cin>>num;
    while(num){
        reversedNum = reversedNum*10 + num%10;
        num /= 10;
    }
    cout<<reversedNum<<endl;
    return 0;
}