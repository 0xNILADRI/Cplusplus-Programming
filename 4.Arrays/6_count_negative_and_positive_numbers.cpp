#include<iostream>
using namespace std;
int main(){
    int A[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    int negCount=0,posCount=0;
    for(int i:A){
        if(i<0)
            negCount++;
        else
            posCount++;
    }
    cout<<"Positive Count : "<<posCount<<endl;
    cout<<"Negative Count : "<<negCount<<endl;
    return 0;
}