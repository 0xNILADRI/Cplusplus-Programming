#include <iostream>
using namespace std;
int main(){
    int sum=0, A[]={1,2,3,4,5};
    for(auto i:A){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}