#include <iostream>
using namespace std;

int search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i+1;
        }
    }
    return 0;
}

int main(){
    int arr[]={5,43,67,88,76,12,14,50,94,57,378,98,11},size,key,res;
    size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number to be searched : ";
    cin>>key;
    res = search(arr,size,key);
    if(res!=0){
        cout<<"The element found at "<<res<<"th position."<<endl;
    }
    else cout<<"Not found"<<endl;
    return 0;
}