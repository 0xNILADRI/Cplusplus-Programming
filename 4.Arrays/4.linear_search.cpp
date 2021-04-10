#include <iostream>
using namespace std;
int main(){
    int A[10],n=10,key;
    cout<<"Enter the array elements : \n";
    for (int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter key : ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(key == A[i]){
            cout<<"Element found at "<<++i<<"th position."<<endl;
            return 0;
        }
    }
    cout<<"Not found"<<endl;
    return 0;
}