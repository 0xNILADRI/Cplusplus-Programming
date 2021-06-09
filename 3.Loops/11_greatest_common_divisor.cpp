#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the two numbers : \n";
    cin>>m>>n;
    while(1){
        if (m > n) m = m-n;
        else if (n > m) n = n - m;
        else break;
    }
    cout<<"Highest common factor is "<<m<<endl;
    return 0;
}