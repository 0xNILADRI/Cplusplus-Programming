#include <iostream>
using namespace std;

int main(){
    int x = 10, y =0;
    try{
        if(y == 0){
            throw 101;
        }
        cout<<x/y<<endl;
    }
    catch(int e){
        cout<<"Division by zero. Error : "<<e<<endl;
    }
    cout<<"Bye"<<endl;
    return 0;
}