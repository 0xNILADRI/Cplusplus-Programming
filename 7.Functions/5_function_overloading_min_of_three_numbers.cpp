#include <iostream>
using namespace std;

int Min(int a,int b){
    return a<b?a:b;
}

int Min(int a, int b, int c){
    return a<b?(a<c?a:c):(b<c?b:c);
}

float Min(float a, float b){
    return a<b?a:b;
}

int main(){
    cout<<Min(10,5)<<endl;
    cout<<Min(12,7,9)<<endl;
    cout<<Min(18.1f,9.7f)<<endl;    
    return 0;
}
