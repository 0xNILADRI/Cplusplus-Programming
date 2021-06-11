#include <iostream>
using namespace std;

int max(int a, int b){
    return a>b?a:b;
}

int min(int a, int b){
    return a<b?a:b;
}

int main(){
    int (*fp)(int,int);
    
    fp=max;
    cout<<"Largest Number : "<<(*fp)(10,15)<<endl;

    fp=min;
    cout<<"Smallest Number : "<<(*fp)(10,15)<<endl;;

    return 0;
}