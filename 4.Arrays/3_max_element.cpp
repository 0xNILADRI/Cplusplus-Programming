#include <iostream>
using namespace std;
int main(){
    int A[]={13,68,5982658,103,226,4658,12965}, max=A[0];
    for(int i:A){
        if(i>max){
            max=i;
        }
    }
    cout<<"Greatest number is "<<max<<endl;
    return 0;
}