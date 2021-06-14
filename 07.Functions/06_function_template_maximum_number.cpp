#include <iostream>
using namespace std;

template <class T>
T Max(T x, T y, T z=0){
    return x>y?x:y;
}

int main(){
    cout<<Max(10,5,8)<<endl;
    cout<<Max(12.5f,17.3f)<<endl;
}