#include <iostream>
using namespace std;

int division(int x, int y){
    if(y==0){
        throw 101;
    }
    return x/y;
}

int main(){
    int x = 10, y =0, z;
    try{
        z = division(x,y);
        cout<<z<<endl;
    }
    catch(int e){
        cout<<"Division by zero. Error : "<<e<<endl;
    }
    cout<<"Bye"<<endl;
    return 0;
}