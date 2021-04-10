#include<iostream>
using namespace std;
int main(){
    int size,j=0;
    cout<<"Enter size : ";
    cin>>size;
    for(int i=0;i<size;i++){
        while(j<=i){
            cout<<"*"<<" ";
            j++;
        }
        j=0;
        cout<<"\n";
    }
    return 0;
}