#include<iostream>
using namespace std;
int main(){
    int size,count=1;
    cout<<"Enter size of the square : ";
    cin>>size;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
}