#include<iostream>
using namespace std;

int pow(int a,int b){
    int result = 1;
    for(int i=0;i<b;i++){
        result *= a;
    }
    return result;
}

int main()
{
    cout<<pow(2,5)<<endl;
    return 0;
}